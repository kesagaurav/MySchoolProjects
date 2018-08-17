#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
char str1[20]="hellogaurav",str2[20]="world";
clrscr();
strstr(str1,str2);
P("\n str1=%s",str1);
P("\n str2=%s",str2);
getch();
}