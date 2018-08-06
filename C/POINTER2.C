#include<stdio.h>
#include<conio.h>
void main()
{
int n,*p;
p=&n;
clrscr();
printf("\n check whether it is positive or negative");
scanf("%d",&n);
if(n>0)
printf("\n positive=%d",n);
else
printf("\n negative=%d",n);
getch();
}
