#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
 int n,sum=0;
 clrscr();
 do
 {
 P("\n enter number[0 to quit]");
 S("%d",&n);
 if (n==0)
 break;
 if(n<0)
   continue;
   sum=sum+n;
   }while(1);
   P("\n sum ofpositive numbers is %d",sum);
   getch();
   }
