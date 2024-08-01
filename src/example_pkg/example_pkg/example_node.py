import rclpy
from rclpy.node import Node
#from std_msgs.msg import String
#from more_interfaces import PointArray

class MyNode(Node):
    
    def __init__(self):
        super().__init__("first_node")
        #    self.counter = 0
        self.create_timer(1.0, self.timer_callback)
        #    self.publisher = self.create_publisher(String, "topic", 10)
    

    def timer_callback(self):
        self.get_logger().info("Hello from ROS2")
        
    
def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
 