import mysql.connector
mydb=mysql.connector.connect(
    host='localhost',
    user='root',
    password='1234',
    database='db1'
    )
cur=mydb.cursor()
s="CREATE TABLE book(bookid int(4),title varchar(20),price float(4))"
cur.execute(s)
