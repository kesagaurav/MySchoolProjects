import java.lang.*;
class T
{
public int x=10;
}
class X extends T
{
public int x=20;
public void showvalues()
{
System.out.println("\nx="+x);
System.out.println("\n x="+x);
}
}
class overide
{
public static void main(String args[])
{
X obj=new X();
obj.showvalues();
}
}
