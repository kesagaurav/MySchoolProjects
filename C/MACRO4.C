#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
float r,volumeofsphere;
clrscr();
P("\n enter r value");
S("%f",&r);
volumeofsphere=(4/3*3.14*r);
P("\n volumeofsphere=%f",volumeofsphere);
getch();
}
