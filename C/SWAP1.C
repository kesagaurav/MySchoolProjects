#include<stdio.h>
#include<conio.h>
#define P printf
void swap(int *a,int *b);
void main()
{
int x=10,y=20;
P("\n values before swapping x and y");
P("\n x=%d y=%d",x,y);
swap(&x,&y);
P("\n values after swapping x and y");
P("\n x=%d y=%d",x,y);
getch();
}
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}

