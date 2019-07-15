#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define p printf
#define s scanf
struct node
{
int data;
struct node*next;
}*news,*head,*tail,*temp;
void create();
void addatbeg();
void addatend();
void addafter();
void delatbeg();
void delatend();
void delafter();
void display();
void count();
void reverse();
void main()
{
int ch;
clrscr();
p("\n 0.exit");
p("\n 1.create");
p("\n 2.addatbeg");
p("\n 3.addatend");
p("\n 4.addafter");
p("\n 5.delatbeg");
p("\n 6.delatend");
p("\n 7.delafter");
p("\n 8.display");
p("\n 9.count");
p("\n 10.reverse");
while(ch!=0)
{
if(ch==1)
create();
else if(ch==2)
addatbeg();
else if(ch==3)
addatend();
else if(ch==4)
addafter();
else if(ch==5)
delatbeg();
else if(ch==6)
delatend();
else if(ch==7)
delafter();
else if(ch==8)
display();
else if(ch==9)
count();
else if(ch==10)
reverse();
p("\n enter your choice");
s("%d",&ch);
}
getch();
}
void create()
{
int value;
p("\n enter value");
news=(struct node*) malloc(sizeof(struct node));
s("%d",&value);
news->data=value;
news->next=NULL;
if(head==NULL)
{
head=news;
tail=news;
}
else
{
tail->next=news;
tail=news;
}
}
void addatbeg()
{
int value;
p("\n insert value at begging");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
news->data=value;
news->next=head;
head=news;
}
void addatend()
{
int value;
p("\n enter value at end");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
news->data=value;
tail->next=news;
news->next=NULL;
tail=news;
}
void addafter()
{
int value,pos,i;
p("\n enter the value to insert");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
p("\n enter pos to insert");
s("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
news->data=value;
news->next=temp->next;
temp->next=news;
}
}
void delatbeg()
{
int value;
p("\n delete at beggining");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
temp=head;
head=head->next;
temp->next=NULL;
}
void delatend()
{
int value;
p("\n delete at end");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
temp=head;
while(temp->next!=tail)
{
temp=temp->next;
}
temp->next=NULL;
tail=temp;
}
void delafter()
{
int value,pos,i;
p("\n delete the no");
news=(struct node*)malloc(sizeof(struct node));
s("%d",&value);
p("\n enter pos to delete");
s("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
temp=temp->next->next;
}
void display()
{
temp=head;
while(temp!=NULL)
{
p("%d\t",temp->data);
temp=temp->next;
}
}
void count()
{
int count=0;
temp=head;
while(temp!=NULL)
{
count++;
temp=temp->next;
}
p("\n count=%d",count);
}
void reverse()
{
struct node*current,*prev=NULL,*next;
current=head;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
}
