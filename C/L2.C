#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define P printf
struct node
{
int data;
struct node*link;
};
void addatbeg(struct node**,int);
void display(struct node*);
int count(struct node*);
void main()
{
struct node*p;
p=NULL;
addatbeg(&p,1);
addatbeg(&p,2);
addatbeg(&p,3);
addatbeg(&p,4);
addatbeg(&p,5);
P("\n no of elements in linked list=%d",count (p));
clrscr();
display(p);
getch();
}
void addatbeg(struct node**q,int num)
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=*q;
*q=temp;
}
void display(struct node*q)
{
while(q!=NULL)
{
P("\n%d",q->data);
q=q->link;
}
}
int count(struct node*q)
{
int c=2;
while(q!=NULL)
{
q=q->link;
c++;
}
return c;
}