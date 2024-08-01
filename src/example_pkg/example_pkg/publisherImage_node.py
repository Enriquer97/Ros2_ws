import numpy as np
import matplotlib.pyplot as plt
import pylab
import rclpy
from pylab import imshow, show, get_cmap
from numpy import random
from rclpy.node import Node
from sensor_msgs.msg import Image

class MyNode(Node):
    
    def __init__(self):
        super().__init__("Publisher_node")
        self.get_logger().info("Hellow from ROS2")
        self.publisher = self.create_publisher(Image, "camera1", 100)
        self.create_timer(0.1, self.publish_callback)
    
    def publish_callback(self):
        msg = Image()
        msg.width = 10
        msg.height = 10
        random= np.random.randint(0, 255, (msg.height, msg.width,3), dtype = np.uint8)
        
        
        for i in range(msg.width):
            for j in range(msg.height):
                for h in range(3):
                    msg.data.append(random[i][j][h])
                
        #image = msg.data
        #im = np.array(image, dtype=np.uint8)
        #im.resize(10,10,3) 

        #plt.imshow(im)
        #plt.axis('off')
        #plt.show()
        #plt.imshow(random)
        #plt.axis('off')
        #plt.show()
        #print(random[0][0])
        #print(msg.data)
        #plt.imshow(msg.data)
        #plt.axis('off')  # Turn off axes
        #plt.show()        
        print("Imagen enviada")
        self.publisher.publish(msg)

    
def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
 