# -*- coding: utf-8 -*-
#!/usr/bin/env python3
import sys
import rclpy
import threading
from serving_robot.Ui import Ui_Form
from PyQt5.QtWidgets import QWidget,QApplication
from serving_robot_msgs.srv import T2C # table to controller
from serving_robot_msgs.action import C2R # controller to robot
from serving_robot_msgs.msg import RobotState
from serving_robot_msgs.msg import TotalPrice2C
from rclpy.node import Node
from PyQt5.QtCore import pyqtSignal
from rclpy.action import ActionClient
from rclpy.action.client import GoalStatus

class Rosnode(Node):
    def __init__(self,gui):
        super().__init__('controller')
        self.gui=gui
        self.oder_server=self.create_service(T2C,'T2C',self.callback)
        self.goal_client=ActionClient(self,C2R,'/table_num')
        self.robot_state_sub=self.create_subscription(RobotState,'/state',self.ch_robot_state,10)
        self.total_price_from_db = self.create_subscription(TotalPrice2C,'total_price',self.total_price_from_db_callback,10)
        self.tatal_data=''

    def ch_robot_state(self,msg):
        a = msg.state
        self.gui.btn_update_signal.emit(a)

    def total_price_from_db_callback(self, msg):
        self.total_pirce = msg.price
        print(self.total_pirce)

    def callback(self,req,res):
        self.table_number = req.table_number
        self.menu = req.menu
        self.menu_number = req.menu_number
        self.price = req.price
        self.get_logger().info(str(self.table_number))
        for i in range(len(self.menu)):
            self.tatal_data+=(self.menu[i]+' '+str(self.menu_number[i])+'\n')
        self.gui.menu_update_signal.emit(self.tatal_data,self.price)
        res.succeed = True
        self.gui.robot_move_state = True
        return res
    
    def send_goal(self):
        wait_count=1
        while not self.goal_client.wait_for_server(timeout_sec=0.1):
            if wait_count>5:
                self.get_logger().info('Robot goal server is not avaliable')
                return False
            wait_count += 1
        
        goal_num = C2R.Goal()
        goal_num.table_num = 12 #### 12를 DB에서 전달 받은 번호로 변경
        self.send_goal_future=self.goal_client.send_goal_async(
            goal_num
            )
        self.send_goal_future.add_done_callback(self.change_robot_state)
        return True
    
    def test(self,feedback):
        pass

    def change_robot_state(self,future):
        goal_handle=future.result()
        if not goal_handle.accepted:
            self.get_logger().info('goal rejected')
            return
        self.action_result=goal_handle.get_result_async()
        self.action_result.add_done_callback(self.result)
    
    def result(self,future):
        action_state=future.result().status
        action_result=future.result().result
        if action_state==GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("succeed!!!")
        else:
            self.get_logger().info("fail...")

class Mainwindow(QWidget):
    menu_update_signal=pyqtSignal(str,int)
    btn_update_signal=pyqtSignal(bool)
    def __init__(self):
        super().__init__()
        self.ui_setup=Ui_Form()
        self.ui_setup.setupUi(self)
        self.setWindowTitle('Kitchen GUI')
        self.menu_update_signal.connect(self.display)
        self.btn_update_signal.connect(self.btn)
        self.robot_move_state = True

        rclpy.init()
        self.node = Rosnode(self)
        self.thread = threading.Thread(target=rclpy.spin, args=(self.node, ))
        self.thread.start()
    
    def display(self,msg,price):
        self.ui_setup.textBrowser_table_2.setText(msg)
        self.ui_setup.label_price_2.setText(str(price))
    
    def btn(self,state):
        if state:
            self.ui_setup.btn_send_food.setEnabled(True)
    
    def send_table_num(self):
        ## 한번 누르면 비활성화 할 것이라 상태를 확인할 필요 없음.
        self.node.send_goal()
        self.ui_setup.btn_send_food.setDisabled(True)
        
def main():
    app=QApplication([])
    window=Mainwindow()
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
