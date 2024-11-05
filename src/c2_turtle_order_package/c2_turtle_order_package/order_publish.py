import rclpy
from rclpy.node import Node
from my_robot_interface.msg import Order
from random import randint

class OrderPublisherNode(Node):
    def __init__(self):
        super().__init__('order_publisher')
        self.publisher_ = self.create_publisher(Order, 'order_topic', 10)
        self.timer = self.create_timer(2, self.publish_order)  # 2초마다 주문 발행

    def publish_order(self):
        msg = Order()
        msg.order_id = randint(1, 1000)
        msg.table_number = randint(1, 10)
        msg.menu_item = "Coffee"
        msg.quantity = randint(1, 5)
        msg.order_status = "pending"
        
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published Order ID: {msg.order_id}")

def main(args=None):
    rclpy.init(args=args)
    order_publisher_node = OrderPublisherNode()
    rclpy.spin(order_publisher_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
