import sys
import rclpy
from rclpy.node import Node
from PyQt5.QtWidgets import QApplication, QWidget, QSpinBox, QPushButton, QVBoxLayout, QLabel,QHBoxLayout,QMessageBox
from table_order_interface.srv import SetOrder

class tableOrderClient(Node):
    def __init__(self):
        #테이블 노드 초기화. 클라이언트로 생성하는 부분
        super().__init__('tableOrderClient')
        self.client = self.create_client(SetOrder, 'SetOrder')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('table order not available, waiting...')

    def sendTableOrderClient(self, tableNumber, menu, menuNumber,totalPrice):
        #테이블의 주문을 관제로 보내는 함수
        #여기 수정하세요!!!!!!
        """
        request = SetOrder.Request()
        request.date = date
        request.tableNumber = tableNumber
        request.menu = menu
        request.menuNumber = menuNumber

        future = self.client.call_async(request)
        future.add_done_callback(self.callback)
        # 수정필요
        """
        request = SetOrder.Request()
        request.table_number = tableNumber
        request.menu = list(menu)
        request.menu_number = list(menuNumber)
        request.price = totalPrice

        future = self.client.call_async(request)
        future.add_done_callback(self.callback)
    def callback(self, future):
        try:
            response = future.result()
            if response.success:
                print(f"Successfully sent {response.succress}")
            else:
                print("Failed to send table order")
        except Exception as e:
            print(f"Service call failed : {e}")

class MainWindow(QWidget):
    def __init__(self):
        super().__init__()
        self.totalPriceInt = 0
        self.client = tableOrderClient()

        self.setWindowTitle("테이블 오더")
        self.setGeometry(800, 400, 400, 300)

        self.layout = QVBoxLayout()

        self.tableLayout = QHBoxLayout()
        self.tableNumberLabel = QLabel("테이블 번호  ")
        self.tableLayout.addWidget(self.tableNumberLabel)
        self.tableNumberBox = QSpinBox(self)
        self.tableNumberBox.setMinimum(1)
        self.tableNumberBox.setMaximum(9)
        self.tableLayout.addWidget(self.tableNumberBox)
        self.tableNumberBox.valueChanged.connect(self.tableChanged)
        self.layout.addLayout(self.tableLayout)


        self.prideChickenLayout = QHBoxLayout()
        self.prideChickenLabel = QLabel("후라이드 치킨 (20,000)")
        self.prideChickenLayout.addWidget(self.prideChickenLabel)
        self.prideChickenNumberBox = QSpinBox(self)
        self.prideChickenNumberBox.setMinimum(0)
        self.prideChickenLayout.addWidget(self.prideChickenNumberBox)
        self.prideChickenNumberBox.valueChanged.connect(self.orderChanged)
        self.layout.addLayout(self.prideChickenLayout)

        self.sourcedChickenLayout = QHBoxLayout()
        self.sourcedChickenLabel = QLabel("양념 치킨 (21,000)")
        self.sourcedChickenLayout.addWidget(self.sourcedChickenLabel)
        self.sourcedChickenNumberBox = QSpinBox(self)
        self.sourcedChickenNumberBox.setMinimum(0)
        self.sourcedChickenNumberBox.valueChanged.connect(self.orderChanged)
        self.sourcedChickenLayout.addWidget(self.sourcedChickenNumberBox)
        self.layout.addLayout(self.sourcedChickenLayout)


        self.soiSourcedChickenLayout = QHBoxLayout()
        self.soiSourcedChickenLabel = QLabel("간장 치킨 (21,000)")
        self.soiSourcedChickenLayout.addWidget(self.soiSourcedChickenLabel)
        self.soiSourcedChickenNumberBox = QSpinBox(self)
        self.soiSourcedChickenNumberBox.setMinimum(0)
        self.soiSourcedChickenNumberBox.valueChanged.connect(self.orderChanged)
        self.soiSourcedChickenLayout.addWidget(self.soiSourcedChickenNumberBox)
        self.layout.addLayout(self.soiSourcedChickenLayout)

        self.totalPriceLayout = QHBoxLayout()
        self.totalPriceLabel = QLabel("총 금액 ")
        self.totalPriceLayout.addWidget(self.totalPriceLabel)
        self.totalPrice = QLabel("")
        self.totalPrice.setNum(self.totalPriceInt)
        self.totalPriceLayout.addWidget(self.totalPrice)
        self.layout.addLayout(self.totalPriceLayout)

        self.bottomLayout = QHBoxLayout()
        self.initButton = QPushButton("초기화", self)
        self.initButton.setFixedWidth(130)
        self.initButton.clicked.connect(self.tableChanged)
        self.orderButton = QPushButton("주문", self)
        self.orderButton.setFixedWidth(130) 
        self.orderButton.clicked.connect(self.sendTableOrder)
        self.bottomLayout.addWidget(self.initButton)
        self.bottomLayout.addWidget(self.orderButton)

        self.layout.addLayout(self.bottomLayout)
        self.setLayout(self.layout)

    def orderChanged(self):
        totalPrice = 20000 * self.prideChickenNumberBox.value() + 21000 * self.sourcedChickenNumberBox.value() +  21000 * self.soiSourcedChickenNumberBox.value() 
        self.totalPrice.setNum(totalPrice)
        self.totalPriceInt = totalPrice

    def tableChanged(self):#초기화 버튼에서도 사용하는 함수
        self.prideChickenNumberBox.setValue(0)
        self.sourcedChickenNumberBox.setValue(0)
        self.soiSourcedChickenNumberBox.setValue(0)

    def sendTableOrder(self):
        # 주문 버튼을 눌렀을때 호출되는 함수
        # DB로 리퀘스트하는 부분. 관제로 리퀘스트하는 부분.  두 파트.
        # 여기 수정하세요!!!!!!!!!!!!!
        ''' 
        서비스 인터페이스
        # Request
        # 날짜는 db에서 생성하여 입력
        int32 table_number # 테이블 번호
        string[] menu # 주문 메뉴
        int32[] menu_number # 주문한 메뉴의 갯수
        int32 price # 총 주문 가격
        ---
        # Response
        bool success
        '''
        if self.totalPriceInt > 0:
            tableNumber = self.tableNumberBox.value()#테이블 번호

            listOrderMenu = []#메뉴 리스트
            listOrderNumber = []#메뉴 갯수 리스트

            prideChickenNumber = self.prideChickenNumberBox.value()
            sourcedChickenNumber = self.sourcedChickenNumberBox.value()
            soiSourcedChickenNumber = self.soiSourcedChickenNumberBox.value()

            totalPrice = self.totalPriceInt#총 가격

            #리스트 생성
            if prideChickenNumber > 0:
                listOrderMenu.append('후라이드')
                listOrderNumber.append(prideChickenNumber)
            else:
                pass

            if sourcedChickenNumber > 0:
                listOrderMenu.append('양념')
                listOrderNumber.append(sourcedChickenNumber)
            else:
                pass

            if soiSourcedChickenNumber > 0:
                listOrderMenu.append('간장')
                listOrderNumber.append(soiSourcedChickenNumber)
            else:
                pass
            
            #보내는 값을 확인하는 print
            print(f"{tableNumber} / {listOrderMenu} / {listOrderNumber} / {totalPrice}")

            # DB에 값을 보내는 부분 

            # 관제에 값을 보내는 부분
            #print(f"Seding table order : {tableNumber}, {prideChickenNumber}, {sourcedChickenNumber}, {soiSourcedChickenNumber}")
            self.client.sendTableOrderClient(tableNumber, listOrderMenu, listOrderNumber, totalPrice)

        else :
            msg = QMessageBox()
            msg.setWindowTitle("주문")
            msg.setText("주문 내역이 없습니다.")
            msg.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
            msg.exec_()

    def exec_event_loop(self):
        while rclpy.ok():  # ROS2 이벤트 루프
            rclpy.spin_once(self.client)  # ROS2 노드의 이벤트 처리
            QApplication.processEvents()  # PyQt5 이벤트 처리

def main():
    rclpy.init()
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    app.exec()
    rclpy.shutdown()

if __name__ == '__main__':
    main()