import mysql.connector
mydb=mysql.connector.connect(
    host='localhost',
    user='root',
    password='1234',
    database='db1'
    )
cur=mydb.cursor()
s="UPDATE book SET price=price+10 WHERE price>100"
cur.execute(s)
mydb.commit()
