#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[30],n,i,j,t;
P("\n enter how many nos U want to input");
S("%d",&n);
P("\n enter nos");
for(i=0;i<n;i++)
{
S("%d",&a[i]);
}
for(i=0;i<n-2;i++)
{
for(j=i+1hjnx;j<=n-1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
P("\n after sorting");
for(i=0;i<n;i++)
{
P("\n%d",a[i]);
}
getch();
}
