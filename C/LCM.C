#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int x,y,l;
clrscr();
P("\n enter 2 nos");
S("%d%d",&x,&y);
for(l=1;l<=x*y;l++)
{
if(l%x==0&&l%y==0)
{
P("\nl=%d",l);
}
}
p("\n lcm=%d",lcm);
getch();
}
