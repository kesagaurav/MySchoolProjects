#include<stdio.h>
#include<conio.h>
void main()
{
int n,ld,rev=0;
clrscr();
printf("\n enter no");
scanf("%d",&n);
while(n>0)
{
ld=n%10;
rev=(rev*10)+ld;
n=n/10;
}
printf("\n rev=%d",rev);
getch();
}
