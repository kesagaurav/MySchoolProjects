import java.lang.*;
class ex5
{
public static void main(String argv[])
{
int a[],n,i;
try
{
n=Integer.parseInt(argv[0]);
a=new int[n];
for(i=0;i<n;i++)
{
a[i]=(i+1)*10;
System.out.println("\t"+a[i]);
}
}
catch(NegativeArraySizeException e)
{
System.out.println("\n error:"+e);
}
System.out.println("\n program terminates");
}
}
