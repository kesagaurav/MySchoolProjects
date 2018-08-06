#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a,b;
P("\n enter nos");
S("%d%d",&a,&b);
if(a>b)
P("\n a is biggest=%d",a);
else
P("\n b is biggest=%d",b);
getch();
}