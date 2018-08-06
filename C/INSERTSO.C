#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[20],i,j,n,key,k;
clrscr();
P("\n enter how  many nos u want to input");
S("%d",&n);
P("\n enter nos");
for(i=0;i<n;i++)
{
S("%d",&a[i]);
}
for(k=1;k<n;k++)
{
key=a[k];
j=k-1;
while(key<a[j] && j>=
0)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
P("\n after insertion sort");
for(i=0;i<n;i++)
{
P("\n%d",a[i]);
}
getch();
}
