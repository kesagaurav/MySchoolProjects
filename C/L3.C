#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define p printf
#define s scanf
struct node
{
int data;
struct node*link;
};
void append();
void addatbeg();
void addafter();
void display();
void count();
void main()
{
int ch,no;
struct node*w;
w=NULL;
clrscr();
p("\n 0.exit");
p("\n 1.append");
p("\n 2.addatbeg");
p("\n 3.addafter");
p("\n 4.display");
p("\n 5.count");
while(ch!=0)
{
if(ch==1)
append();
else if(ch==2)
addatbeg();
else if(ch==3)
addafter();
else if(ch==4)
display();
else if(ch==5)
count();
p("\n enter ur choice");
s("%d",&ch);
}
count(w);
getch();
}
void append()
{
struct node**q;
int num;
struct node*temp,*r;
p("\n enter no");
s("%d",&num);
p("\n no of elements in linked list=%d",num);
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
void addatbeg()
{
struct node**q;
int num;
struct node*temp;
p("\n enter the elements at beginning");
s("%d",&num);
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=*q;
*q=temp;
}
void addafter()
{
struct node*q,*temp,*r;
int loc,num,i;
temp=q;
p("\n enter the elements");
s("%d",&loc);
for(i=0;i<loc;i++)
{
temp=temp->link;
if(temp==NULL)
{
p("\n there are less than %d elements",loc);
return;
}
}
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
r->link=temp->link;
temp->link=r;
}
void display()
{
struct node*q;
int display;
while(q!=NULL)
{
p("display=%d",q->data);
q=q->link;
}
}
void count()
{
struct node*q;
int c=0;
p("\n");
while(q!=NULL)
{
p("%d",q->data);
q=q->link;
c++;
}
p("\n no of elements in linked list=%d",c);
}
