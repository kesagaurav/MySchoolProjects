#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[20][20],n,m,i,j;
clrscr();
P("\n enter order of elements");
S("%d%d",&n,&m);
P("\n enter the values for a[%d][%d]",m,n);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
S("%d",&a[i][j]);
if(a[i][j]%2==1)
P("\n odd=%d",a[i][j]);
}
}
getch();
}

