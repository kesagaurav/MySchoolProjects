import java.lang.*;
class bank
{
public static void main(String argv[])
{
int a=0,b=0,c=0;
try
{
a=Integer.parseInt(argv[0]);
b=Integer.parseInt(argv[1]);
if(b==0)
throw new ArithmeticException("divide by zero promblem");
c=a/b;
System.out.println("\n c="+c);
}
catch(Exception e)
{
System.out.println("\n divide by zero promblem:"+e);
}
}
}
