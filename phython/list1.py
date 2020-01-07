Python 3.7.2 (tags/v3.7.2:9a3ffc0492, Dec 23 2018, 23:09:28) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> list=[1,2,3,4,5,6,7,8,9]
>>> print(list)
[1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> list.append(10)
>>> print(list)
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
>>> list.insert(10,11)
>>> print(list)
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
>>> list.reverse()
>>> print(list)
[11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
>>> list.index(12)
Traceback (most recent call last):
  File "<pyshell#8>", line 1, in <module>
    list.index(12)
ValueError: 12 is not in list
>>> 
