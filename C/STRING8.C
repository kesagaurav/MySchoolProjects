#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
char s1[20],s2[30],s3[50];
int x,l1,l2,l3;
P("\n enter strings");
S("%s%s",s1,s2);
x=strcmp(s1,s2);
if(x!=0)
{
P("\n strings are not equal");
strcat(s1,s2);
}
else
P("\n strings are equal");
strcpy(s3,s1);
l1=strlen(s1);
l2=strlen(s2);
l3=strlen(s3);
P("\ns1=%s\t length=%d characters",s1,l1);
P("\ns2=%s\t length=%d characters",s2,l2);
P("\ns3=%s\t length=%d characters",s3,l3);
}
