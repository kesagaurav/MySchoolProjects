Python 3.8.1 (tags/v3.8.1:1b293b6, Dec 18 2019, 22:39:24) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> var=100
>>> var
100
>>> type(var)
<class 'int'>
>>> var='a'
>>> var
'a'
>>> type(var)
<class 'str'>
>>> var=90.00
>>> var
90.0
>>> type(var)
<class 'float'>
>>> var=[1,2,[1,2],4]
>>> type(var)
<class 'list'>
>>> var=(1,2,[2,3,4],5)
>>> type(var)
<class 'tuple'>
>>> var={'a':1,'b':8}
>>> type(var)
<class 'dict'>
>>> var=3+4j
>>> type(var)
<class 'complex'>
>>> var=45.3+3.6j
>>> type(var)
<class 'complex'>
>>> complex(2,5)
(2+5j)
>>> complex(2,5.6)
(2+5.6j)
>>> 5/2
2.5
>>> 5//2
2
>>> 5.0/2
2.5
>>> 5.0//2
2.0
>>> 5%2
1
>>> 5%2.0
1.0
>>> 3==2
False
>>> 3>=3
True
>>> 3>3
False
>>> 'd' in 'digital'
True
>>> 'z' in 'digital'
False
>>> 'it' in 'digital'
True
>>> 'dl' in 'digital'
False
>>> type error int is not iterable
SyntaxError: invalid syntax
>>> '1' in '12345'
True
>>> 1==true
Traceback (most recent call last):
  File "<pyshell#36>", line 1, in <module>
    1==true
NameError: name 'true' is not defined
>>> 1==True
True
>>> 0==False
True
>>> var='hello world'
>>> var[:]
'hello world'
>>> var[1:6]
'ello '
>>> var[:6]
'hello '
>>> var[2:7]
'llo w'
>>> var[2:-2]
'llo wor'
>>> var[-1]
'd'
>>> var(0:7:12)
SyntaxError: invalid syntax
>>> var(0:7:2)
SyntaxError: invalid syntax
>>> 'hello'*3
'hellohellohello'
>>> 'hello'*'world'
Traceback (most recent call last):
  File "<pyshell#49>", line 1, in <module>
    'hello'*'world'
TypeError: can't multiply sequence by non-int of type 'str'
>>> 'hello'*'world'
Traceback (most recent call last):
  File "<pyshell#50>", line 1, in <module>
    'hello'*'world'
TypeError: can't multiply sequence by non-int of type 'str'
>>> '#'*50
'##################################################'
>>> for i in 'digital';
SyntaxError: invalid syntax
>>> for i in 'digital':
	print(i)

	
d
i
g
i
t
a
l
>>> for i in 1234567
SyntaxError: invalid syntax
>>> var='hello world'
>>> var
'hello world'
>>> var='hello \n world'
>>> var
'hello \n world'
>>> print(var)
hello 
 world
>>> 'hello' \t 'world'
SyntaxError: unexpected character after line continuation character
>>> 'hello \t world'
'hello \t world'
>>> var='hello \a world'
>>> print(var)
hello  world
>>> var='\a'
>>> print(var)

>>> var='hello\bworld'
>>> print(var)
helloworld
>>> var=hello
Traceback (most recent call last):
  File "<pyshell#70>", line 1, in <module>
    var=hello
NameError: name 'hello' is not defined
>>> var='hello'
>>> print(var)
hello
>>> var='hello'
>>> var.captalize()
Traceback (most recent call last):
  File "<pyshell#74>", line 1, in <module>
    var.captalize()
AttributeError: 'str' object has no attribute 'captalize'
>>> var.capitalize()
'Hello'
>>> var.lower()
'hello'
>>> var.upper()
'HELLO'
>>> var.startswith('a')
False
>>> var.startswith('hl')
False
>>> var.startswith('hle')
False
>>> var.endwith('le')
Traceback (most recent call last):
  File "<pyshell#81>", line 1, in <module>
    var.endwith('le')
AttributeError: 'str' object has no attribute 'endwith'
>>> var.strip('h')
'ello'
>>> var.strip('o')
'hell'
>>> var.atrip('li')
Traceback (most recent call last):
  File "<pyshell#84>", line 1, in <module>
    var.atrip('li')
AttributeError: 'str' object has no attribute 'atrip'
>>> var.strip('0')
'hello'
>>> var.split('llo')
['he', '']
>>> var.split(' ')
['hello']
>>> var='hello world'
>>> var.split(' ')
['hello', 'world']
>>> var.split('o')
['hell', ' w', 'rld']
>>> var.lstrip()
'hello world'
>>> var='\thello\n'
>>> var.lstrip()
'hello\n'
>>> var='hellh'
>>> var.strip(h)
Traceback (most recent call last):
  File "<pyshell#95>", line 1, in <module>
    var.strip(h)
NameError: name 'h' is not defined
>>> var='hellh'
>>> var.strip('h')
'ell'
>>> var='this is my school named as blcakbucks'
>>> var.split(' ')
['this', 'is', 'my', 'school', 'named', 'as', 'blcakbucks']
>>> var[5]
'i'
>>> new_var='this is my school named black bucks'
>>> new_var.split(' ')[-2]
'black'
>>> new_var
'this is my school named black bucks'
>>> new_var=var.split(' ')
>>> new_var
['this', 'is', 'my', 'school', 'named', 'as', 'blcakbucks']
>>> var='hello'
>>> var.isalpha()
True
>>> var='tommorow morning'
>>> var.find('o',1)
1
>>> var.find('o',2)
4
>>> var.find('0',3)
-1
>>> var.find('o',4)
4
>>> var.find('o',4)
4
>>> var.find('o',5)
6
>>> var.find('o',6)
6
>>> var.find('o',7)
10
>>> var.replace('tomorrow','yesterday')
'tommorow morning'
>>> var.relace('o' ,'#',3)
Traceback (most recent call last):
  File "<pyshell#118>", line 1, in <module>
    var.relace('o' ,'#',3)
AttributeError: 'str' object has no attribute 'relace'
>>> var.rindex('o')
10
>>> var.replace('o','#',3)
't#mm#r#w morning'
>>> var.zfill(10)
'tommorow morning'
>>> var=abc
Traceback (most recent call last):
  File "<pyshell#122>", line 1, in <module>
    var=abc
NameError: name 'abc' is not defined
>>> var='abc'
>>> var.zfill(10)
'0000000abc'
>>> var='hello'
>>> #.join(var)
>>> '#'.join(var)
'h#e#l#l#o'
>>> var='hello'
>>> '#'+'#'.join(var)+'#'
'#h#e#l#l#o#'
>>> var-['hello']
Traceback (most recent call last):
  File "<pyshell#130>", line 1, in <module>
    var-['hello']
TypeError: unsupported operand type(s) for -: 'str' and 'list'
>>> var=['hello']
>>> var.insert(1,'welcome')
>>> var
['hello', 'welcome']
>>> var.insert(o,'welcome')
Traceback (most recent call last):
  File "<pyshell#134>", line 1, in <module>
    var.insert(o,'welcome')
NameError: name 'o' is not defined
>>> var=['hello','world']
>>> var.extend('welcome')
>>> var
['hello', 'world', 'w', 'e', 'l', 'c', 'o', 'm', 'e']
>>> var='a'
>>> ord(var)
97
>>> var=98
>>> chr(var)
'b'
>>> var=['hello','world']
>>> var.append('welcome')
>>> var
['hello', 'world', 'welcome']
>>> var=['hello','world']
>>> var.sort()
>>> var
['hello', 'world']
>>> var=[9,8,7,6]
>>> var.sort()
>>> var
[6, 7, 8, 9]
>>> var.remove(6)
>>> var
[7, 8, 9]
>>> var.pop()
9
>>> var
[7, 8]
>>> var.index(7)
0
>>> 