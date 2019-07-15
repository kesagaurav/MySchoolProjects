#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define P printf
struct node
{
int data;
struct node *link;
};
void append(struct node**,int);
void addatbeg(struct node*,int);
void addafter(struct node*,int,int);
void addbefore(struct node*,int,int);
void display(struct node*);
int count(struct node*);
void middle(struct node*);
void delete(struct node**,int);
void main()
{
struct node*p;
p=NULL;
P("\n no of elements on list=%d",count(p));
append(&p,61);
append(&p,24);
append(&p,33);
append(&p,45);
append(&p,59);
clrscr();
display(p);
middle(p);
addatbeg(p,999);
addatbeg(p,666);
addatbeg(p,777);
display(p);
middle(p);
addbefore(p,1,10);
addbefore(p,4,8);
addbefore(p,1,75);
display(p);
middle(p);
P("\n no of elements before linked list=%d",count(p));
addafter(p,4,0);
addafter(p,6,9);
addafter(p,7,99);
display(p);
display(p);
P("\n no of elements in list =%d",count(p));
delete(&p,99);
delete(&p,9);
delete(&p,10);
display(p);
P("\n no of elements in list=%d",count(p));
display(p);
middle(p);
getch();
}
void append(struct node**q,int num)
{
struct node *temp,*r;
if(*q==NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=NULL;
*q=temp;
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
void addatbeg(struct node*q,int num)
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=q;
q=temp;
}
void addbefore(struct node*q,int loc,int num)
{
struct node*temp,*r,*prev;
int i;
temp=q;
for(i=0;i<loc;i++)
{
prev=temp;
temp=temp->link;
if(temp->data==num)
{
P("\n there are less than %d elements in list");
return;
}
}
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=prev->link;
prev->link=r;
}
void addafter(struct node*q,int loc,int num)
{
struct node*prev,*r,*temp;
int i;
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
void display(struct node*q)
{
P("\n");
while(q!=NULL)
{
P("%d, ",q->data);
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
return c;
}
void middle(struct node*q)
{
struct node*temp,data;
int count2,middle2,i;
temp=q;
count2=count(q);
middle2=count2/2;
for(i=0;i<middle2;i++)
{
temp=temp->link;
if(temp==NULL)
{
P("\n there are less than%d elements",middle2);
return;
}
}
P("\n middle no is %d",temp->data);
}
void delete(struct node**q,int num)
{
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






