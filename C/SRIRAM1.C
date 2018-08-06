#include<stdio.h>
#include<conio.h>
void main()
{
int i,num1,num2,hcf=1,min;
printf("\n enter two numbers for finding of hcf");
scanf("%d%d",&num1,&num2);
min=(num1<num2)? num1:num2;
for(i=1;i<=min;i++)
{
if(num1%i==0 && num2%i==0)
{
hcf=i;
}
}
printf("hcf of %d and %d=%d\n",num1,num2,hcf);
getch();
}
