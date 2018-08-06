#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int i;
clrscr();
P("\n enter whethere is even or odd");
S("%d",&i);
if(i%2==0 || i%2==1)
{
P("\n EVEN NO");
}
else
{
P("\n ODD NO");
}
getch();
}
