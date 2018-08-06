#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i;
clrscr();
printf("\n enter n value");
scanf("%d",&n);
printf("\n enter nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
printf("\n odd numbers=%d",a[i]);
}
getch();
}
