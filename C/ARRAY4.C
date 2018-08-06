#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i,big;
printf("\n enter nos");
scanf("%d",&n);
printf("\n enter biggest of nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
big=a[0];
for(i=0;i<n;i++)
{
if(a[i]>big)
big=a[i];
}
printf("\n biggest=%d",big);
getch();
}
