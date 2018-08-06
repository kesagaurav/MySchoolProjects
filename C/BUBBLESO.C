#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[30],i,j,n,t;
clrscr();
P("\n enter how many nos u want to input");
S("%d",&n);
P("\n enter nos");
for(i=0;i<n;i++)
{
S("%d",&a[i]);
}
for(i=n-1;i>=1;i--)
{
for(j=0;j<i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
P("\n values after sort");
for(i=0;i<n;i++)
{
P("\n%d",a[i]);
}
getch();
}
