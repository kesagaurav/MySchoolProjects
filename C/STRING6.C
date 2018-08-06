#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n\n");
for(c=65;c<=122;c++)
{
if(c>90 && c<97)
continue;
printf("|%4d-%c",c,c);
}
printf("|\n");
getch();
}
