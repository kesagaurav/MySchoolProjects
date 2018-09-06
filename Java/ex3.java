import java.lang.*;
class ex2
{
public static void main(String argv[])
{
int x,y,z;
x=Integer.parseInt(argv[0]);
y=Integer.parseInt(argv[1]);
try
{
z=x/y;
System.out.println("\n z="+z);
}
catch(ArithmeticException e)
{
System.out.println("\n division by zero promblem");
}
System.out.println("\nprogram terminates");
}
}
