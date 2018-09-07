import java.lang.*;
class bank
{
public void div(int x,int y)
{
int z=0;
try
{
if(y==0)
throw new ArithmeticException("division by zero promblem");
z=x/y;
System.out.println("\n z="+z);
}
catch(Exception e)
{
System.out.println("\n error:"+e);
}
}
}
class rethrow
{
public static void main(String args[])
{
bank obj=new bank();
try
{
obj.div(9,3);
obj.div(4,2);
}
catch(Exception e)
{
System.out.println("\n recaught an exception:"+e);
}
System.out.println("\n program terminates");
}
}



