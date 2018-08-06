#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#define PI 3.14
void triangle();
void rectangle();
void square();
void circle();
void main()
{
clrscr();
triangle();
rectangle();
square();
circle();
getch();
}
void triangle()
{
float base,height,area;
P("\n enter base and height");
S("%f%f",&base,&height);
area=0.5*base*height;
P("\n area=%f",area);
}
void rectangle()
{
float length,breadth,area;
P("\n enter length and breadth");
S("%f%f",&length,&breadth);
area=length*breadth;
P("\n area=%f",area);
}
void square()
{
float a,b;
P("\n enter  a no");
S("%f",&a);
a=b*b;
P("\n square=%f",b);
}
void circle()
{
float radius,area;
P("\n enter radius");
S("%f",&radius);
area= PI*radius*radius;
P("\n area=%f",area);
}
