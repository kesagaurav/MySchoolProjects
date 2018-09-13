#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct date
{
int dd,mm,yy;
};
struct bank
{
char name[20];
int  accno;
float amount;
struct date d;
};
void main()
{
struct bank b;
clrscr();
P("\n enter name,accno,amount");
S("%s%d%f",b.name,&b.accno,&b.amount);
P("\n enter date of deposit");
S("\n %d%d%d",&b.d.dd,&b.d.mm,&b.d.yy);
P("\n name=%s\taccno=%d\tamount=%f\t",b.name,b.accno,b.amount);
P("\n date of deposit:%d-%d-%d",b.d.dd,b.d.mm,b.d.yy);
getch();
}
