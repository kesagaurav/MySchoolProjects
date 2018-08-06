#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],*p,n,i,sum=0;
printf("\n enter n value");
scanf("%d",&n);
p=a;
printf("\n enter nos");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
sum=sum+(*p+i);
}
printf("\n sum=%d",sum,(*p+i));
getch();
}
