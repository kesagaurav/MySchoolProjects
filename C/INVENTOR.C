#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
 float eoq,dr,sc,hc,tbo;
 clrscr();
 P("\n enter dr,sc,hc");
 S("%f%f%f",&dr,&sc,&hc);
 eoq=sqrt(2*dr*sc/hc);
 tbo=sqrt(2*sc/dr*hc);
 P("\n eoq=%f tbo=%f",eoq,tbo);
 getch();
 }
