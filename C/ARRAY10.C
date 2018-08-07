#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[5],i,sum=0;
float avg;
clrscr();
P("\n enter nos");
for(i=0;i<5;i++)
{
P("\n enter nos is %d",i);
S("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum+=a[i];
}
avg=sum/5.0;
P("\n sum of five nos is %d",sum);
P("\n avg of five nos is %f",avg);
getch();
}
