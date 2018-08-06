#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],*p,n,i,sum=0;
printf("\n enter n value");
scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
sum=sum+(*p+i);
}
printf("\n sum=%d",sum,a[i],(*p+i));
getch();
}
