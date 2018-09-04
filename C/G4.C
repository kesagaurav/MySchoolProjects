#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
int i,j;
clrscr();
for(i=5;i>=1;i--)
{
for(j=5;j>=i;j--)
{
P("%d",j);
}
P("\n");
}
getch();
}
