#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#define PI 3.14
void main()
{
 float r,area;
 P("enter radius");
 S("%f",&r);
 area=PI*r*r;
 P("area=%f",area);
 getch();
 }