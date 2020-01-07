import mysql.connector
mydb=mysql.connector.connect(
    host='localhost',
    user='root',
    password='1234',
    database='db1'
    )
cur=mydb.cursor()
s="INSERT INTO  book(bookid,title,price) VALUES(%s,%s,%s)"
b1=[(1,'python4',234),
(2,'gaurav',99),
(4,'faizan',250)]
cur.executemany(s,b1)
mydb.commit()
