#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
char str1[20]="hello",str2[30]="gaurav";
int count;
clrscr();
P("\n enter string");
for(count=1;count<=10;count++)
{
strstr(str1,str2);
count++;
}
P("\n str1=%s",str1);
P("\n str2=%s",str2);
P("\n count=%d",count);
getch();
}
