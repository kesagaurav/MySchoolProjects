#include<stdio.h>
#include<conio.h>
#define P printf
#define MAX 7
struct stack
{
int arr[MAX];
int top;
};
void initstack(struct stack*);
void push(struct stack*,int);
int pop(struct stack*,int);
void main()
{
struct stack s;
int i;
clrscr();
initstack(&s);
push(&s,1);
push(&s,2);
push(&s,3);
push(&s,4);
push(&s,5);
push(&s,6);
push(&s,7);
i=pop(&s,1);
P("\n item is popped %d",i);
i=pop(&s,2);
P("\n item is popped %d",i);
i=pop(&s,3);
P("\n item is popped%d",i);
i=pop(&s,4);
P("\n item is popped %d",i);
getch();
}
void initstack(struct stack*s)
{
s->top=-1;
}
void push(struct stack*s,int item)
{
if(s->top==MAX)
{
P("\n stack is full");
return;
}
s->top++;
s->arr[s->top]=item;
}
int pop(struct stack*s,int item)
{
if(s->top==-1)
{
P("\n stack is empty");
return NULL;
}
item=s->arr[s->top];
s->top--;
return item;
}

