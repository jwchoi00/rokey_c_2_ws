import time
import threading
from PIL import Image, ImageTk

import tkinter as tk
from tkinter import scrolledtext

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient


from action_msgs.msg import GoalStatus
from nav2_msgs.action import NavigateToPose


#실시간 로봇 위치 서브스크립
#서비스 클라이언트 -- set_initial_pose
# 액션  클라이언트 -- navigate_to_pose, wait


class Turtlebot3ControlGui(Node):

    def __init__(self, poses):
        super().__init__('turtlebot3_control_gui')
        self.phase = 0
        self.wait_time = 5
        self.poses = poses

        self.navigate_to_pose_action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')


    ## ACTION CLIENT NAVIGATE      
    def navigate_to_pose_send_goal(self, point):
        wait_count = 1
        while not self.navigate_to_pose_action_client.wait_for_server(timeout_sec=0.1):
            if wait_count > 3:
                self.get_logger().warning('Navigate action server is not available.')
                return False
            wait_count += 1

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.pose.position.x = self.poses[f'{point}']['position']['x']
        goal_msg.pose.pose.position.y = self.poses[f'{point}']['position']['y']
        goal_msg.pose.pose.position.z = self.poses[f'{point}']['position']['z']
        goal_msg.pose.pose.orientation.x = self.poses[f'{point}']['orientation']['x']
        goal_msg.pose.pose.orientation.y = self.poses[f'{point}']['orientation']['y']
        goal_msg.pose.pose.orientation.z = self.poses[f'{point}']['orientation']['z']
        goal_msg.pose.pose.orientation.w = self.poses[f'{point}']['orientation']['w']
        
        self.send_goal_future = self.navigate_to_pose_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.navigate_to_pose_action_feedback)
        self.send_goal_future.add_done_callback(self.navigate_to_pose_action_goal)
        
        return True

    def navigate_to_pose_action_goal(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warning('Action goal rejected.')
            return
        self.get_logger().info('Action goal accepted.')
        self.action_result_future = goal_handle.get_result_async()
        self.action_result_future.add_done_callback(self.navigate_to_pose_action_result)

    def navigate_to_pose_action_feedback(self, feedback_msg):
        action_feedback = feedback_msg.feedback
        # self.get_logger().info('Action feedback: {0}'.format(action_feedback))

    def navigate_to_pose_action_result(self, future):
        action_status = future.result().status
        action_result = future.result().result
        if action_status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Action succeeded!')
            if self.phase ==1:
                self.phase=0
                #waiting 동작
        else:
            self.get_logger().warning(
                'Action failed with status: {0}'.format(action_status))


class MyGUI:
    def __init__(self, root, node):
        self.root = root
        self.root.title("turtlebot3 control gui")
        self.root.geometry("1000x500+10+10")
        
        self.node = node
        
        label = tk.Label(self.root, text="Waiting (sec) :", font=("",20))
        label.place(x=550, y=40)
        
        self.add_entry()
        
        # 버튼 추가
        self.button1 = tk.Button(self.root, text="Table1", command=self.on_button_click1, width=12, height=3)
        self.button1.place(x=550, y=100)
        
        self.button2 = tk.Button(self.root, text="Table2", command=self.on_button_click2, width=12, height=3)
        self.button2.place(x=680, y=100)
        
        self.button3 = tk.Button(self.root, text="Table3", command=self.on_button_click3, width=12, height=3)
        self.button3.place(x=550, y=170)
        
        self.button4 = tk.Button(self.root, text="Table4", command=self.on_button_click4, width=12, height=3)
        self.button4.place(x=680, y=170)
        
        self.button5 = tk.Button(self.root, text="Kitchen", command=self.on_button_click5, width=12, height=3)
        self.button5.place(x=810, y=100)
        
        self._setup_board()

    def on_button_click1(self):
        # 버튼 클릭 시 호출되는 메소드
        self.node.navigate_to_pose_send_goal('table_1')
        

def main():

    poses = {
        'table_1' : {'position' : {'x': 0.6, 'y':1.8, 'z':0.0},
                     'orientation': {'x': 0.0, 'y':0.0, 'z':0.0, 'w':1.0}}
    }

    rclpy.init()
    NODE = Turtlebot3ControlGui(poses)
    thread_spin = threading.Thread(target=rclpy.spin, args=(NODE, ))
    thread_spin.start()
    
    GUI = tk.Tk()
    app = MyGUI(GUI, NODE)
    GUI.mainloop()
    
    NODE.destroy_node()
    rclpy.shutdown()
    thread_spin.join()


if __name__ == "__main__":
    main()