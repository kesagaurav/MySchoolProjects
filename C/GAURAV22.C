#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j;
clrscr();
printf("\n enter the sq matrix of [nxm]:");
scanf("%d%d",&m,&n);
if(n!=m)
{
printf("\n not a sq matrix");
}
else
{
printf("\n enter value of sq matrix is a[%d][%d] matrix \n",m,n);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n lower triangle\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 if(i>=j)
 printf("%d",a[i][j]);
 else
 printf("-");
 }
 printf("\n");
 }
 }
 getch();

