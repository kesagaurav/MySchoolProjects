#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
float a,b,c,discriminant,root1,root2,sqrt;
clrscr();
P("\n enter the values for a,b,c");
S("%f%f%f",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant<0)
P("\n roots are imaginary");
else
root1=(-b+sqrt(discriminant))/(2.0*a);
root2=(-b+sqrt(discriminant))/(2.0*a);
P("\n root1=%f,root2=%f",root1,root2);
getch();
}