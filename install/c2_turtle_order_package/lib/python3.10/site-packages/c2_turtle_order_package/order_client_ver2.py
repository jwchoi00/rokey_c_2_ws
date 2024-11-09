import rclpy
from rclpy.node import Node
from c2_turtle_interface.srv import Order_ver2
#from c2_turtle_interface.msg import OrderItem

class OrderClient(Node):
    def __init__(self):
        super().__init__('order_client')
        self.client = self.create_client(Order_ver2, 'order_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스를 기다리는 중입니다...')
        self.req = Order_ver2.Request()
        """# Order.srv
            int32 table_number
            string[] menu_name
            int32[] quantity
            int32 total_price
            ---
            bool success
        """
    def send_order_request(self):
        try:
            table_number = int(input("테이블 번호를 입력하세요 (종료하려면 -1 입력): "))
            if table_number == -1:
                return False

            menu_input = input("메뉴 항목을 입력하세요 (쉼표로 구분): ")
            quantitiy_input = input("수량을 입력하세요 (쉼표로 구분): ")
            #price_input = input("메뉴 가격을 입력하세요 (쉼표로 구분): ")
            total_price_input = int(input("총 가격을 입력하세요: "))
            
            menu_items = menu_input.split(',')
            quantities = [int(q) for q in quantitiy_input.split(',')]
            #prices = [int(p.strip()) for p in price_input.split(',')]  # Ensure prices are integers

            self.req.table_number = table_number
            self.req.menu_name = [menu.strip() for menu in menu_items]
            self.req.quantity = [qty for qty in quantities]
            self.req.total_price = total_price_input

            # 제대로 리스트로 전달되는지 확인
            self.get_logger().info(f"table_number: {table_number}")
            self.get_logger().info(f"menu_items: {menu_items}")
            self.get_logger().info(f"quantities: {quantities}")
            self.get_logger().info(f"prices: {total_price_input}")
            future = self.client.call_async(self.req)
            rclpy.spin_until_future_complete(self, future)
            if future.result().success:
                self.get_logger().info("주문이 성공적으로 저장되었습니다")
            else:
                self.get_logger().info("주문 저장에 실패하였습니다.")
            return True
        except ValueError as e:
            self.get_logger().error(f"입력 오류: {e}")
            return True

def main(args=None):
    rclpy.init(args=args)
    order_client = OrderClient()
    while order_client.send_order_request():
        pass
    order_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
