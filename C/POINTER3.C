#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2;
p1=&a;
p2=&b;
clrscr();
printf("\n enter which is biggest");
scanf("%d%d",&a,&b);
if(a>b)
printf("\n biggest=%d",a,*p1);
else
printf("\n biggest=%d",b,*p2);
getch();
}
