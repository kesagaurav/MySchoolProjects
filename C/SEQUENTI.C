#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[10],i,key,found=0;
clrscr();
P("\n enter 10 nos");
for(i=0;i<10;i++)
{
S("%d",&a[i]);
}
P("\n enter nos to search");
S("%d",&key);
for(i=0;i<10;i++)
{
if(key==a[i])
{
P("\n no found in a[%d] element",i);
found=1;
}
}
if(found==0)
{
P("\n no not found in the array=%d,key");
}
getch();
}
