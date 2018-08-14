#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
char ch;
clrscr();
P("\n would you like to know my name");
P("\n type Y for yes and N for no");
ch=getchar();
if(ch=='Y'||ch=='y')
P("\n my name is BUSY BEE");
else
P("\n you are good for nothing");
getch();
}
