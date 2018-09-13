#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define P printf
#define S scanf
struct bank
{
char name[15];
int accno;
struct bank *next;
};
void main()
{
struct bank *start,*end,*i;
char ans;
clrscr();
start=(struct bank*)malloc(sizeof(struct bank));
end=start;
while(1)
{
P("\n enter name and accno");
S("%s%d",end->name,&end->accno);
P("\n want to continue [y/n]");
fflush(stdin);
S("%c",&ans);
if(ans=='y')
{
end->next=(struct bank*)malloc(sizeof(struct bank));
end=end->next;
}
else
{
end->next=NULL;
break;
}
}
P("\n details of account");
for(i=start;i!=NULL;i=i->next)
{
P("\n name=%s\t accno=%d",i->name,i->accno);
}
free(start);
getch();
}
