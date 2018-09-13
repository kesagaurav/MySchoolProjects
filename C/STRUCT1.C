#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct personal
{
char name[20];
int days;
char month[10];
int year;
float salarly;
};
void main()
{
struct personal person;
P("\n input values");
S("%s%d%s%d%f",person.name,&person.days,person.month,&person.year,&person.salarly);
P("\n %s%d%s%d%f",person.name,person.days,person.month,person.year,person.salarly);
}
