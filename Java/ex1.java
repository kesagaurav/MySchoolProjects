import java.lang.*;
class ex1
{
public static void main(String argv[])
{
int a,b,c;
a=Integer.parseInt(argv[0]);
b=Integer.parseInt(argv[1]);
try
{
c=a/b;
System.out.println("\n c="+c);
}
catch(ArithmeticException e)
{
System.out.println("\ndivision by zero promblem");
}
System.out.println("\n programterminates");
}
}
