Python 3.7.2 (tags/v3.7.2:9a3ffc0492, Dec 23 2018, 23:09:28) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> print('this is a string{}'.format('WELCOME TO PROGRAMMING'))
this is a stringWELCOME TO PROGRAMMING
>>> print('this is a string{}'.format('\n WELCOME TO PROGRAMMING'))
this is a string
 WELCOME TO PROGRAMMING
>>>  print('this is a string{}'.format('\t WELCOME TO PROGRAMMING'))
SyntaxError: unexpected indent
>>> print('this is a string{}'.format('\t WELCOME TO PROGRAMMING'))
this is a string	 WELCOME TO PROGRAMMING
>>>  print('this is a string{}'.format('\\\\ WELCOME TO PROGRAMMING'))
SyntaxError: unexpected indent
>>> print('this is a string{}'.format(' WELCOME TO PROGRAMMING'))
this is a string WELCOME TO PROGRAMMING
>>> print({},{},{}.format('fox','sliver','gold'))
Traceback (most recent call last):
  File "<pyshell#6>", line 1, in <module>
    print({},{},{}.format('fox','sliver','gold'))
AttributeError: 'dict' object has no attribute 'format'
>>> print('{},{},{}'.format('fox','sliver','gold'))
fox,sliver,gold
>>> print('{2},{1},{0}'.format('fox','sliver','gold'))
gold,sliver,fox
>>> print('{1},{2},{0}'.format('fox','sliver','gold'))
sliver,gold,fox
>>> print('the {},{},{},.format(f='fox',g='grown',c='cat'))
	  
SyntaxError: invalid syntax
>>>  print('the {},{},{},'.format(f='fox',g='grown',c='cat'))
	  
SyntaxError: unexpected indent
>>> print('the {},{},{},'.format(f='fox',g='grown',c='cat'))
	  
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    print('the {},{},{},'.format(f='fox',g='grown',c='cat'))
IndexError: tuple index out of range
>>> 
