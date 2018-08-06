#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
clrscr();
printf("\n enter 5 nos");
for(i=0;i<5;i++)
{
printf("\n enter nos is %d:",i,a[i]);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+i;
}
printf("\n sum of 5 nos is %d",sum);
getch();
}
