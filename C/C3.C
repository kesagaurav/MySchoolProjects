#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define P printf
void main()
{
char ch;
clrscr();
P("\n press any key");
ch=getchar();
if(isalpha(ch)>0)
P("\n the character is a letter");
else if(isdigit(ch)>0)
P("\n the character is a digit");
else
P("\n the character is not any alphanumeric");
getch();
}
