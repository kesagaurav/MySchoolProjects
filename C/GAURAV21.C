#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],m,n,i,j;
clrscr();
printf("\n enter the matrix [mxn]");
scanf("%d%d",&n,&m);
printf("\n enter values ofa[%d][%d]\n",m,n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter value for b[%d][%d]\n",m,n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n after addtion");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
getch();
}
