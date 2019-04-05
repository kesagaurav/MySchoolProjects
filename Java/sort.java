import java.io.*;
class sort
{
public static void main(String argv[]) throws IOException
{
int a[],n=10,i,j,t;
a=new int[n];
InputStreamReader isr=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(isr);
try
{
System.out.println("enter how many nos U want to input");
n=Integer.parseInt(br.readLine());
System.out.println("\nenter nos");
for(i=0;i<n;i++)
{
a[i]=Integer.parseInt(br.readLine());
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
System.out.println("\n after selection sort");
for(i=0;i<n;i++)
System.out.println("\t"+a[i]);
}
catch(Exception e)
{
System.out.println("\n error:"+e);
}
}
}
