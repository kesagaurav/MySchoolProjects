import java.io.*;
class A
{
private static int x;
private int y;
public void setvalues(int a,int b)
{
this.x=a;
this.y=b;
}
public void showvalues()
{
System.out.println("\n static x="+x +"\n nonstatic y="+y);
}
}
class static2
{
public static void main(String args[])
{
A obj1=new A();
A obj2=new A();
obj1.setvalues(100,300);
System.out.println("\n obj1");
obj1.showvalues();
System.out.println("\n obj2");
obj2.showvalues();
}
}
 