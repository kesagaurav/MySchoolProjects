#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
float depreciation=20000.00;
int yrsof_service=40;
float purchase_price=50.00;
float salvage_price;
clrscr();
P("\n show the salvage price");
S("%f",&salvage_price);
salvage_price=depreciation*yrsof_service+purchase_price;
P("\n salvage price=%f",salvage_price);
getch();
}
