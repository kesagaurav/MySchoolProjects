#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("\n enter factors");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
printf("\n perfectnumber=%d",n);
}
