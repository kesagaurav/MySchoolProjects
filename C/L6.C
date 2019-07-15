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
void append(struct node**,int);
void addafter(struct node*,int,int);
void addbefore(struct node*,int,int);
void deletes(struct node**,int);
void display(struct node*);
int count(struct node*);
void main()
{
int choice;
struct node*p;
p=NULL;
//P("\n no of elements in linked list=%d",count(p));
//append(&p,1);
//append(&p,2);
//append(&p,3);
//append(&p,4);
clrscr();
//display(p);
//addafter(p,1,6);
//addafter(p,2,5);
//display(p);
//P("\n no of elements in linked list=%d",count(p));
//addbefore(p,1,0);
//addbefore(p,2,8);
//deletes(&p,4);
//deletes(&p,2);
//display(p);
//P("\n no of elements in linked list=%d",count(p));
while(choice!=0)
{
P("\n 0.exit");
P("\n 1.append");
P("\n 2.addafter");
P("\n 3.addbefore");
P("\n 4.delete");
P("\n 5.display");
P("\n 6.count");
P("\n enter your choice");
S("%d",&choice);
if(choice==1)
{
P("\n enter nos u want to input");
P("\n no of elements in linked list is%d",count(p));
append(&p,1);
append(&p,2);
append(&p,3);
display(p);
}
else if(choice==2)
{
addafter(p,1,90);
addafter(p,2,87);
display(p);
P("\n no of elements in linked list is %d",count(p));
}
else if(choice==3)
{
addbefore(p,2,40);
addbefore(p,2,80);
display(p);
P("\n no of elements in linked list is%d",count(p));
}
else if(choice==4)
{
deletes(&p,40);
deletes(&p,87);
display(p);
P("\n no of elements in linked list is %d",count(p));
}
else if(choice==5)
display(p);
else if(choice==6)
count(p);
}
getch();
}
void append(struct node**q,int num)
{
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
void addafter(struct node*q,int loc,int num)
{
struct node*temp,*r;
int i;
temp=q;
for(i=0;i<loc;i++)
{
temp=temp->link;
if(temp==NULL)
{
P("\n no of elements in linked list=%d",loc);
return;
}
}
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=temp->link;
temp->link=r;
}
void addbefore(struct node*q,int loc,int num)
{
struct node*prev,*temp,*r;
int i;
temp=q;
for(i=0;i<loc;i++)
{
prev=prev->link;
temp=temp->link;
if(temp->data==NULL)
{
P("\n enter nos in linked list is%d",loc);
return;
}
}
prev=(struct node*)malloc(sizeof(struct node));
prev->data=num;
prev->link=temp->link;
prev->link=r;
}
void deletes(struct node**q,int num)
{
struct node*temp,*old;
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
P("\n element %dnot found",num);
}
}
void display(struct node*q)
{
P("\n");
while(q!=NULL)
{
P("%d",q->data);
q=q->link;
}
}
int count(struct node*q)
{
int c=0;
while(q!=NULL)
{
q=q->link;
c++;
}
return;
}


