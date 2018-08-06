#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int n,i,c,a=1;
P("\n ENTER THE ROWS TO PRINGT THE FLOYD TRIANGLE");
S("%d",&n);
for(i=1;i<=n;i++)
{
for(c=1;c<=i;c++)
{
a++;
}
}
getch();
}

