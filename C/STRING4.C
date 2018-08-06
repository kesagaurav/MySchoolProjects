#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i=0,vow=0,cons=0;
printf("\n enter string");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
vow++;
else
cons++;
i++;
}
printf("\n number of vowels=%d",vow);
printf("\n numbr of consonent=%d",cons);
getch();
}
