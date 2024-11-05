import rclpy
from rclpy.node import Node
from c2_turtle_interface.srv import Order

class OrderClient(Node):
    def __init__(self):
        super().__init__('order_client')
        self.client = self.create_client(Order, 'order_service')

    def send_order_request(self, table_number, menu_item, quantity, total_price):
        req = Order.Request()
        req.table_number = table_number
        req.menu_item = menu_item
        req.quantity = quantity
        req.total_price = total_price
        
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스가 아직 시작되지 않았습니다. 재시도 중...')
        
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info('주문 요청이 성공적으로 처리되었습니다.')
        else:
            self.get_logger().error('주문 요청이 실패했습니다.')

def main(args=None):
    rclpy.init(args=args)
    order_client = OrderClient()

    while True:
        try:
            # 사용자로부터 입력 받기
            table_number = int(input("테이블 번호를 입력하세요 (종료하려면 -1 입력): "))
            if table_number == -1:
                break  # 종료 조건

            menu_item = input("메뉴 항목을 입력하세요: ")
            quantity = int(input("수량을 입력하세요: "))
            total_price = float(input("가격을 입력하세요: ")) * quantity

            # 주문 요청 보내기
            order_client.send_order_request(table_number, menu_item, quantity, total_price)
        
        except ValueError as e:
            order_client.get_logger().error(f'입력 오류: {e}')

    rclpy.shutdown()

if __name__ == '__main__':
    main()
