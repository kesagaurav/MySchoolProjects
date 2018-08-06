#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void sum();
void main()
{
clrscr();
sum();
sum();
sum();
getch();
}
void sum()
{
int a,b,c;
P("\n enter 2 nos");
S("%d%d",&a,&b);
c=a+b;
P("\n sum=%d",c);
}
