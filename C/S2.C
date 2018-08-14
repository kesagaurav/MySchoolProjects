#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
char str[30];
int count=0,n;
clrscr();
P("\n enter string");
S("%d",&n);
P("\n enter  string of characters",n);
S("%s",str);
while(count<n)
{
P("\n %c=%d",str[count],str[count]);
++count;
}
getch();
}
