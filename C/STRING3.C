#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i,len=0;
clrscr();
printf("\n enter string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
len++;
}
printf("\n length of %s is=%d\n",str,len);
getch();
}
