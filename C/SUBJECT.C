#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int mathematics,physics,chemistry,total;
clrscr();
P("\n enter marks of 3 subjects");
S("%d%d%d",&mathematics,&physics,&chemistry);
P("\n 1.mathematics");
P("\n 2.physics");
P("\n 3.chemistry");
P("%d",&total);
if(mathematics>=60)
P("\n pass");
else if(physics>=50)
P("\n pass");
 else if(chemistry>=40)
P("\n pass");
else if(total>=200)
P("\n pass");
total=mathematics+physics+chemistry;
getch();
}
