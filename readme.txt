database
- MySQL를 사용하여 주문 정보를 저장하고 관리
- 테이블 번호, 메뉴 이름, 수량, 총 가격, 시간과 날짜 정보를 기록
tabel_order
-GUI로 테이블 번호 설정, 메뉴 주문 수량 설정, 초기화 기능 제공
-주문 내역을 database와 관제로 service request로 전송
Request	   |     param name   | describe
-----------------------------------------
int32	   |   table_number   |	테이블 번호
string[]   |   menu	          | 주문 메뉴 리스트의 형태로 저장
int32[]    |   menu_number    | 주문한 메뉴의 갯수, 메뉴 리스트와 쌍으로 저장
int32      |   price          | 총 주문 가격
-----------------------------------------
Response
bool       |   success        | 주문 승인 완료 