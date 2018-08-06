#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter number from 1 to 5");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\n one");
break;
case 2:
printf("\n two");
break;
case 3:
printf("\n three");
break;
case 4:
printf("\n four");
break;
case 5:
printf("\n five");
break;
default:
printf("\n number out of range=%d",n);
break;
}
getch();
}
