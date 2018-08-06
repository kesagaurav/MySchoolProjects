#include<stdio.h>
void main()
{
int a,b,c;
int *p1,*p2,*p3;
p1=&a;
p2=&b;
p3=&c;
printf("\n enter sum");
scanf("%d%d",&a,&b);
*p3=*p1+*p2;
printf("\n sum=%d",*p3);
}
