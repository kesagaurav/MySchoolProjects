#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct bank
{
char name[30];
int accno;
float amount;
};
void main()
{
struct bank b;
clrscr();
P("\n enter name,accno,amount");
S("%s%d%f",b.name,&b.accno,&b.amount);
P("\n bank record details.........");
P("\n name=%s,accno=%d,amount=%f",b.name,b.accno,b.amount);
}
