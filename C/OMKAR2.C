#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
float avg;
clrscr();
printf("\n enter numbers");
for(i=0;i<5;i++)
{
printf("\n enter numbers %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
avg=sum/5;
printf("\n sum of 5 numbers is %d",sum);
printf("\n avg of 5 numbers is %f",avg);
getch();
}
