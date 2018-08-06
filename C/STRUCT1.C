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
struct bank b;
P("\n enter name,accno and amount");
S("%s%d%f",b.name,&b.accno,&b.amount);
P("\n name=%s",b.name);
P("\n accno=%d",b.accno);
P("\n amount=%f",b.amount);
}
