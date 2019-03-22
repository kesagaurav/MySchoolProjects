#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define true 0
#define false 1
#define p printf
struct btree
{
struct btree*leftchild;
int data;
struct btree*rightchild;
};
void insert(struct btree*,int);
void deletes(struct btree*,int);
void search(struct btree*,int,struct btree*,struct btree*,int *);
void inorder(struct btree*);
void main()
{
struct btree*bt;
int i=0,req,num,a[]={11,9,13,8,10,12,14,15,7};
bt=NULL;
clrscr();
while(i<=8)
{
insert(bt,a[i]);
i++;
}
clrscr();
p("\n binary tree after deletion");
inorder(bt);
deletes(bt,10);
p("\n binar tree after deletion");
inorder(bt);
deletes(bt,14);
p("\n binary tree after deletion");
inorder(bt);
deletes(bt,8);
p("\n binary tree after deletion");
inorder(bt);
deletes(bt,13);
p("\n binary tree after deletion");
inorder(bt);
getch();
}
void insert(struct btree*sr,int num)
{
if(sr==NULL)
{
sr=(struct btree*)malloc(sizeof(struct btree));
sr->leftchild=NULL;
sr->data=num;
sr->rightchild=NULL;
}
else
{
if(num<sr->data)
insert((sr->leftchild),num);
else
insert((sr->rightchild),num);
}
}
void deletes(struct btree*root,int num)
{
int found;
struct btree*parent,*x,*xsuc;
if(root==NULL)
{
p("\n root is empty");
return;
}
parent=x=NULL;
search(root,num,parent,x,&found);
if(found==false)
{
p("\n data to be deleted,not found");
return;
}
if(x->leftchild!=NULL&&x->rightchild!=NULL)
{
parent=x;
xsuc=x->rightchild;
while(xsuc->leftchild!=NULL)
{
parent=xsuc;
xsuc=xsuc->leftchild;
}
x->data=xsuc->data;
x=xsuc;
}
if(x->leftchild==NULL && x->rightchild==NULL)
{
if(parent->rightchild==x)
parent->rightchild=NULL;
else
parent->leftchild=NULL;
free(x);
return;
}
if(x->leftchild==NULL && x->rightchild!=NULL)
{
if(parent->leftchild==x)
parent->leftchild=x->rightchild;
else
parent->rightchild=x->rightchild;
free(x);
return;
}
if(x->leftchild!=NULL && x->rightchild==NULL)
{
if(parent->leftchild==x)
parent->leftchild=x->leftchild;
else
parent->rightchild=x->leftchild;
free(x);
return;
}
}
void search(struct btree*root,int num,struct btree*par,struct btree*x,int *found)
{
struct btree*q;
q=root;
*found=false;
par=NULL;
while(q!=NULL)
{
if(q->data==num)
{
found=true;
x=q;
return;
}
par=q;
if(q->data>num)
q=q->leftchild;
else
q=q->rightchild;
}
}
void inorder(struct btree*sr)
{
if(sr!=NULL)
{
inorder(sr->leftchild);
p("\t%d",sr->data);
inorder(sr->rightchild);
}
}
