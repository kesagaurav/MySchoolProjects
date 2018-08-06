#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,n,sign=1,p=0;
long int pt;
float x,sum=0.0,xp;
printf("\n enter no of terms");
scanf("%d",&n);
printf("\n enter value of x");
scanf("%f",&x);
for(i=1;i<=n;i++)
{
xp=pow(x,p);
pt=1;
for(j=1;j<=p;j++)
{
pt=pt*j;
}
sum=sum+(xp/pt)*sign;
sign=sign*-1;
p=p+2;
}
printf("\n sum of series=%f",sum);
getch();
}
