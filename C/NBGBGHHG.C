#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter value:");
scanf("%d",&a);
a=a++ + ++a;
printf("val=%d",a);
getch();
}