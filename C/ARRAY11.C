#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[2],b[2],i,j;
clrscr();
P("\n enter nos");
S("%d%d",&a[i],&b[j]);
if(a[i]>b[j])
P("\n a is biggest=%d",a[i]);
else
P("\n b is biggest=%d",b[j]);
getch();
}
