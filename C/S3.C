#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
char a[20],rev[30];
int i,j=0,len=0;
P("\n enter text");
S("%s",a);
for(i=0;a[i]!='\0';i++)
{
len++;
}
for(i=len-1;i>=0;i--)
{
rev[j]=a[i];
j++;
}
rev[j]='\0';
P("\n rev is %s",rev);
getch();
}
