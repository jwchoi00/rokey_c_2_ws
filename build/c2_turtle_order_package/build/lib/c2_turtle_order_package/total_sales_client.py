import rclpy
from rclpy.node import Node
from c2_turtle_interface.srv import GetTotalSales

class TotalSalesClient(Node):
    def __init__(self):
        super().__init__('total_sales_client')
        self.client = self.create_client(GetTotalSales, 'get_total_sales')

    def send_request(self, date):
        req = GetTotalSales.Request()
        req.date = date
        
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스가 아직 시작되지 않았습니다. 재시도 중...')
        
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info(f'{date}의 총 매출: {future.result().total_sales}')
        else:
            self.get_logger().error('총 매출 요청이 실패했습니다.')

def main(args=None):
    rclpy.init(args=args)
    total_sales_client = TotalSalesClient()
    
    # 예시: 날짜를 입력받아 총 매출 요청
    date = input("총 매출을 조회할 날짜를 입력하세요 (YYYY-MM-DD): ")
    total_sales_client.send_request(date)
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
