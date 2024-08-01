import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Vector3

phase = 0

class MyNode(Node):
    
    def __init__(self):
        super().__init__("Publisher_node")
        self.get_logger().info("Publisher working")
        self.publisher = self.create_publisher(Vector3, "topic", 10)
        self.create_timer(1.0, self.publish_callback)

    def publish_callback(self):
        msg = Vector3()
        global phase
        if phase == 0:
            msg.x = 0.0
            msg.y = 1.0
            msg.z = 1.0
            phase += 1 
        elif phase == 1:
            msg.x = 0.0
            msg.y = 1.0
            msg.z = 1.2
            phase += 1 
        else:
            msg.x = 0.0
            msg.y = 1.0
            msg.z = 1.4    
            phase = 0
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
