#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j;
clrscr();
printf("\n enter order of square matrix [mxn]:");
scanf("%d%d",&m,&n);
if(m!=n)
{
printf("\n not a square matrix");
}
else
{
printf("\n enter values for a[%d][%d] matrix\n",m,n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n upper triangle \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i<=j)
printf("%d",a[i][j]);
else
printf("-");
}
printf("\n");
}
}
getch();
}
