#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct bank
{
char name[15];
int accno;
float amount;
};
void main()
{
struct bank b[4];
int i;
clrscr();
P("\n enter 4 accounts details");
for(i=0;i<=4;i++)
{
P("\n enter name,accno,amount");
S("%s%d%f",b[i].name,&b[i].accno,&b[i].amount);
}
P("\n account details");
for(i=0;i<=4;i++)
{
P("\n name=%s,accno=%d,amount=%f",b[i].name,b[i].accno,b[i].amount);
}
getch();
}

