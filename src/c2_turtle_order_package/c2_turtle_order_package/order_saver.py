import rclpy
from rclpy.node import Node
from mysql.connector import connect, Error
from c2_turtle_interface.srv import Order, GetTotalSales  # 추가된 서비스 임포트
from c2_turtle_interface.msg import OrderItem
from datetime import datetime

class OrderSaver(Node):
    def __init__(self):
        super().__init__('order_saver')
        self.connection = self.create_connection()
        # 주문 서비스 설정
        self.srv = self.create_service(Order, 'order_service', self.handle_order)

        # 총 매출 서비스 설정
        self.sales_srv = self.create_service(GetTotalSales, 'get_total_sales', self.handle_get_total_sales)

    def create_connection(self):
        """MySQL 데이터베이스와 연결을 생성하는 메서드"""
        try:
            connection = connect(
                host='192.168.123.45',  # MySQL 서버 IP
                user='jwchoi0017',    # MySQL 사용자
                password='1234',      # MySQL 비밀번호
                database='orders_db'  # 데이터베이스 이름
            )
            if connection.is_connected():
                self.get_logger().info("MySQL 데이터베이스에 연결되었습니다.")
                return connection
        except Error as e:
            self.get_logger().error(f"연결 오류: {e}")
            return None

    def handle_order(self, request, response):
        """주문 요청을 처리하는 메서드"""
        table_number = request.table_number
        items = request.items
        total_price = request.total_price
        order_id = self.save_order_to_db(table_number, total_price)
        
        if order_id:
            for item in items:
                self.save_item_to_db(order_id, item.menu_item, item.quantity, item.quantity * item.price)

            response.success = True
        else:
            response.success = False
            
        return response

    def save_order_to_db(self, table_number, total_price):
        """주문 정보를 MySQL 데이터베이스에 저장하는 메서드"""
        try:
            cursor = self.connection.cursor()
            # 1. orders 테이블에 주문 정보를 저장
            query = "INSERT INTO orders (table_number, total_price) VALUES (%s, %s)"
            cursor.execute(query, (table_number, total_price))  # total_price는 각 항목의 가격 합으로 설정
            self.connection.commit()

            # 2. 새로 저장된 주문의 ID 가져오기
            order_id = cursor.lastrowid
            self.get_logger().info(f"주문이 저장되었습니다: {table_number}, 총 가격 {total_price}")
            return order_id
        except Error as e:
            self.get_logger().error(f"주문 저장 오류: {e}")
            return None
        finally:
            cursor.close()

    def save_item_to_db(self, order_id, menu_item, quantity, price):
        """주문 항목 정보를 MySQL 데이터베이스에 저장하는 메서드"""
        try:
            cursor = self.connection.cursor()
            query = "INSERT INTO order_items (order_id, menu_item, quantity, price) VALUES (%s, %s, %s, %s)"
            cursor.execute(query, (order_id, menu_item, quantity, price))
            self.connection.commit()
            self.get_logger().info(f"항목 저장됨: 주문 ID {order_id}, 메뉴 {menu_item}, 수량 {quantity}, 가격 {price}")
        except Error as e:
            self.get_logger().error(f"항목 저장 오류: {e}")
        finally:
            cursor.close()


    def handle_get_total_sales(self, request, response):
        """특정 날짜의 총 매출을 가져오는 메서드"""
        total_sales = self.get_total_sales_from_db(request.date)
        response.total_sales = float(total_sales)
        return response

    def get_total_sales_from_db(self, date):
        """특정 날짜의 총 매출을 MySQL에서 조회하는 메서드"""
        try:
            cursor = self.connection.cursor()
            query = "SELECT SUM(total_price) AS total_sales FROM orders WHERE DATE(order_time) = %s"
            cursor.execute(query, (date,))
            result = cursor.fetchone()
            return result[0] if result[0] is not None else 0.0
        except Error as e:
            self.get_logger().error(f"총 매출 조회 오류: {e}")
            return 0.0
        finally:
            cursor.close()

def main(args=None):
    rclpy.init(args=args)
    order_saver = OrderSaver()
    rclpy.spin(order_saver)
    order_saver.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
