import mysql.connector

# 데이터베이스 연결
connection = mysql.connector.connect(
    host='192.168.123.45',
    user='jwchoi0017',
    password='1234',
    database='orders_db'
)

cursor = connection.cursor()

# 테이블 목록 가져오기
cursor.execute("SHOW TABLES")
tables = cursor.fetchall()
print("Tables:", tables)

# 특정 테이블 구조 가져오기
cursor.execute("DESCRIBE orders")
columns = cursor.fetchall()
for column in columns:
    print(column)

cursor.close()
connection.close()
