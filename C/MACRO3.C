#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
long int fact=1;
int i,n;
P("\n enter fact no");
S("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
P("\n fact=%ld",fact);
getch();
}
