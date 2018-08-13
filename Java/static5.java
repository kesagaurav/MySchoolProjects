import java.io.*;
class sample
{
private static int x;
private int y;
public void setvalues(int a,int b)
{
x=a;
y=b;
}
public void showvalues()
{
System.out.println("\n static x="+x);
System.out.println("\n non static y="+y);
}
public static void showstatic()
{
System.out.println("\n static="+x);
}
}
class static6
{
public static void main(String args[])
{
sample obj=new sample();
obj.setvalues(100,200);
obj.showvalues();
obj.showstatic();
}
}
