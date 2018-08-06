#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("\n enter an number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
printf("\n out of range");
getch();
}
