import random
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from more_interfaces.msg import PointArray
from geometry_msgs.msg import Point


class MyNode(Node):
    
    def __init__(self):
        super().__init__("Publisher_node")
        self.get_logger().info("Publisher working")
        self.publisher = self.create_publisher(PointArray, "topic", 100)
        self.create_timer(0.0000001, self.publish_callback)

    def publish_callback(self):
        msg = PointArray()
        for i in range(13):
            v = Point()
            v.x = random.uniform(-0.405,0.405)
            v.y = random.uniform(0.18,1.65)
            v.z = 0.0
            
            #msg.points[i].x = random.uniform(-0.27,1.65)
            #msg.points[i].y = random.uniform(-0.405,0.405)
            #msg.points[i].z = 0
            msg.points.append(v)
            print(v)
        
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
