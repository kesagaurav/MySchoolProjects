#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define P printf
#define S scanf
struct node
{
int data;
struct node*link;
};
void append();
void addafter();
void addbefore();
void deletes();
void display();
int count();
void main()
{
int ch,nos;
//struct node*p;
//p=NULL;
clrscr();
while(ch!=0)
{
P("\n 0.exit");
P("\n 1.append");
P("\n 2.addafter");
P("\n 3.addbefore");
P("\n 4.deletes");
P("\n 5.display");
P("\n 6.count");
P("\n enter your choice");
S("%d",&ch);
P("\n enter nos");
S("%d",&nos);
if(ch==1)
append();
else if(ch==2)
addafter();
else if(ch==3)
addbefore();
else if(ch==4)
deletes();
else if(ch==5)
display();
else if(ch==6)
count();
}
getch();
}
void append()
{
struct node**q;
int num;
struct node*temp,*r;
if(*q==NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=NULL;
}
else
{
temp=*q;
while(temp->link!=NULL)
temp=temp->link;
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=NULL;
temp->link=r;
}
}
void addafter()
{
struct node*q,*r,*temp;
int num,i,loc;
temp=q;
for(i=0;i<loc;i++)
{
temp=temp->link;
if(temp==NULL)
{
P("\n there are less than %d elements in list",loc);
return;
}
}
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=temp->link;
temp->link=r;
}
void addbefore()
{
struct node*q,*r,*prev,*temp;
int num,i,loc;
temp=q;
for(i=0;i<loc;i++)
{
prev=temp;
temp=temp->link;
if(temp->data==NULL)
{
P("\n there are less than %d elements in list",loc);
return;
}
}
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=prev->link;
prev->link=r;
}
void deletes()
{
struct node**q;
int num;
struct node*old,*temp;
temp=*q;
while(temp!=NULL)
{
if(temp->data==num)
{
if(temp==*q)
*q=temp->link;
else
old->link=temp->link;
free(temp);
return;
}
else
{
old=temp;
temp=temp->link;
}
}
P("\n element %d not found",num);
}
void display()
{
struct node*q;
P("\n");
if(q==NULL)
{
P("\n list is empty");
}
else
{
P("\n the list is");
while(q!=NULL)
{
P("\n%d",q->data);
q=q->link;
}
}
}
int count()
{
struct node*q;
int c=0;
while(q!=NULL)
{
q=q->link;
c++;
}
return c;
}

