import java.lang.*;
class ex4
{
public static void main(String argv[])
{
try
{
System.out.println("\n first argument="+argv[0]);
System.out.println("\n second argument="+argv[1]);
}
catch(ArrayIndexOutOfBoundsException e)
{
System.out.println("\n index is out of range");
}
System.out.println("\n program terminates");
}
}
