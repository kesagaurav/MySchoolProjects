#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
char ch[30];
int len;
clrscr();
P("\n enter lenght of the string");
S("%s",ch);
gets(ch);
len=strlen(ch);
P("\n length of %s is %d",ch,len);
P("\n length of the apple is %d",strlen("apple"));
getch();
}

