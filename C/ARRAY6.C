#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],*ptr,n,i;
clrscr();
printf("\n enter n value");
scanf("%d",&n);
for(i=0;i<5;i++)
{
scanf("%d",ptr+i);
}
printf("\n the array elements are");
for(i=0;i<5;i++)
{
printf("\n %d",(*ptr+i));
}
getch();
}