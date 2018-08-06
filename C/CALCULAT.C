#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a,b,c,choice;
clrscr();
P("\n calculator");
P("\n 1.addtion");
P("\n 2.sub");
P("\n 3.mul");
P("\n 4.div");
P("\n enter choice");
S("%d",&choice);
P("\n enter 2 nos");
S("%d%d",&a,&b);
if(choice==1)
{
c=a+b;
P("\n addtion=%d",c);
}
else if(choice==2)
{
c=a-b;
P("\n sub=%d",c);
}
else if(choice==3)
{
c=a*b;
P("\n mul=%d",c);
}
else if(choice==4)
{
c=a/b;
P("\n div=%d",c);
}
else
{
P("\n invalid choice is %d",choice);
}
getch();
}
