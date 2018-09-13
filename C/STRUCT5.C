#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#include<malloc.h>
struct employee
{
char name[20];
int empno;
float salarly;
};
void main()
{
struct employee *eptr;
clrscr();
eptr=(struct employee*)malloc(sizeof(struct employee));
P("\n enter name,empno,sal");
S("%s%d%f",eptr->name,&eptr->empno,&eptr->salarly);
P("\n employee record");
P("\n name=%s\tempno=%d\tsalarly=%f",eptr->name,eptr->empno,eptr->salarly);
free(eptr);
getch();
}
