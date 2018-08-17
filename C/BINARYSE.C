#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[40],high,mid,low,key,found=0,i,j,t,n;
P("\n enter nos");
S("%d",&n);
P("\n enter numbers");
for(i=0;i<n;i++)
{
S("%d",&a[i]);
}
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
P("\n enter element u want to serach");
S("%d",&key);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
if(key==a[mid])
{
found=1;
P("\n element is found at a[%d] element",mid);
break;
}
else if(key<a[mid])
{
high=low-1;
}
else if(key>a[mid])
{
low=mid+1;
}
mid=(low+high)/2;
}
if(found==0)
P("\n element not found");
getch();
}

