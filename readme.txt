database
- MySQL를 사용하여 주문 정보를 저장하고 관리
- table_order로 부터 테이블 번호, 메뉴 이름, 수량, 총 가격을 받아서 Mysql에 기록하고 CMD창에 noti
- tabel_order로 부터 request를 받았다면 success를 table_order로 반환

tabel_order
-GUI로 테이블 번호 설정, 메뉴 주문 수량 설정, 초기화 기능 제공
-주문 내역을 database와 관제로 service request로 전송
-database로 부터 response를 받으면 CMD창에 Noit == print("Successfully sent")

database와 table_order에 사용되는 service param
Request	   |     param name   | describe
-----------------------------------------
int32	   |   table_number   |	테이블 번호
string[]   |   menu	          | 주문 메뉴 리스트의 형태로 저장
int32[]    |   menu_number    | 주문한 메뉴의 갯수, 메뉴 리스트와 쌍으로 저장
int32      |   price          | 총 주문 가격
-----------------------------------------
Response
bool       |   success        | 주문 승인 완료

------------------------------------------
사전 환경 설정
infonfig -wlo1: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
         inet 192.168.123.45
DataBaseServer.py에서
    def create_connection(self):
        """MySQL 데이터베이스와 연결을 생성하는 메서드"""
        try:
            connection = connect(
                host='192.168.123.45 ',  # MySQL 서버 IP
                user='jwchoi0017',    # MySQL 사용자
                password='1234',      # MySQL 비밀번호
                database='orders_db'  # 데이터베이스 이름
            )
            if connection.is_connected():
                self.get_logger().info("MySQL 데이터베이스에 연결되었습니다.")
                return connection
        except Error as e:
            self.get_logger().error(f"연결 오류: {e}")
            return None
Mysql 서버 IP 번경 (host='찾은 IP 번호')

실행 방법
cd rokey_c2_ws
colcon build --symlink-install
source install/setup.bash

ros2 run table_order tabel_order
ros2 run database database_server
