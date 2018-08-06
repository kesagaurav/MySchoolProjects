#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
 {
   int i,j;
   clrscr();
   for (i=1;i<=5;i++)
    {
      for (j=1 ;j<=i;j++)
      {
       P("%d",i);
       }
       P("\n");
       }
       getch();
       }
