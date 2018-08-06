#include<stdio.h>
#include<conio.h>
#define COLMAX 10
#define ROWMAX 12
#define P printf
int table(int row,int col);
void main()
{
int row,col,y;
P("\n multiplication table");
for(row=1;row<=ROWMAX;row++)
{
for(col=1;col<=COLMAX;col++)
{
y=row*col;
P("\n %d",y);
}
P("\n");
}
getch();
}
int table(int row,int col)
{
int z;
z=row*col;
return(z);
}
