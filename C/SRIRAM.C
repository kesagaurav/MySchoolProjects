#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
float simple(float p,float t,float r);
void main()
{
float p,t,r,si;
P("\n enter p,t,r");
S("%f%f%f",&p,&t,&r);
si=simple(p,t,r);
P("\n si=%f",si);
getch();
}
float simple(float p,float t,float r)
{
float s;
s=p*t*r/100;
return(s);
}

