#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i,esum=0;
\\clrscr();\\
printf("\n enter n value");
scanf("%d",&n);
printf("\n enter nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
esum=esum+a[i];
}
printf("\n esum=%d",esum);
getch();
}
