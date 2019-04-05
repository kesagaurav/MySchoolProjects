import java.io.*;
class search2
{
public static void main(String argv[]) throws IOException
{
int a[],low,high,mid,found=0,n=10,i,j,t,key;
a=new int[n];
InputStreamReader isr=new InputStreamReader(System.in);
BufferedReader br=new  BufferedReader(isr);
try
{
System.out.println("\n enter how many nos U want to input");
n=Integer.parseInt(br.readLine());
System.out.println("\n enter nos");
for(i=0;i<n;i++)
a[i]=Integer.parseInt(br.readLine());
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
System.out.println("\n enter number to search");
key=Integer.parseInt(br.readLine());
low=0;
high=n-1;
mid=low+high/2;
while(low<=high)
{
if(key==a[mid])
{
System.out.println("\n number found in element"+mid);
found=1;
break;
}
else if(key<a[mid])
high=mid-1;
else if(key>a[mid])
low=mid+1;
mid=low+high/2;
}
if(found==0)
System.out.println("\n number not found in the array");
}
catch(Exception e)
{
System.out.println("\n error:"+e);
}
}
}
