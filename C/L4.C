#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct node
{
int data;
struct node*link;
};
void add();
void sub();
void mul();
void divide();
void main()
{
int choice;
clrscr();
while(choice!=0)
{
P("\n 0.exit");
P("\n 1.addition");
P("\n 2.substraction");
P("\n 3.multiply");
P("\n 4.divide");
P("\n 5.square");
P("\n 6.cube");
P("\n enter your choice");
S("%d",&choice);
//clrscr();
if(choice==1)
add();
if(choice==2)
sub();
if(choice==3)
mul();
//P("\n enter your choice");
//S("%d",&choice);
//continue;
}
getch();
}
void display(struct node*q)
{
P("\n");
if(q==NULL)
{
P("list is empty");
}
}
void add()
{
int a,b,c;
P("\n enter a numbers");
S("%d%d",&a,&b);
c=a+b;
P("\n c=%d",c);
}
void sub()
{
int a,b,c;
P("\n enter nos");
S("%d%d",&a,&b);
c=a-b;
P("\n c=%d",c);
}
void mul()
{
int a,b,c;
P("\n enter numbers");
S("%d%d",&a,&b);
c=a*b;
P("\n c=%d",c);
}
