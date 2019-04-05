import java.io.*;
class search
{
public static void main(String argv[]) throws IOException
{
int a[],i,key=10,found=0;
a=new int[key];
InputStreamReader isr=new InputStreamReader(System.in);
BufferedReader br=new  BufferedReader(isr);
try
{
System.out.println("\n enter 10 nos");
for(i=0;i<10;i++)
a[i]=Integer.parseInt(br.readLine());
System.out.println("\n enter number to search");
key=Integer.parseInt(br.readLine());
for(i=0;i<10;i++)
{
if(key==a[i])
{
System.out.println(" number found in array"+i);
found=1;
}
}
if(found==0)
{
System.out.println("\n number not found in array\t"+ key);
}
}
catch(Exception e)
{
System.out.println("\n error"+e);
}
}
}
