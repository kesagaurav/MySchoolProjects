#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("\n enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
sum=sum+i;
}
printf("\n sum=%d",sum);
getch();
}
