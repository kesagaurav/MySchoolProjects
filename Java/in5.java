import java.lang.*;
class a
{
public int x=20;
}
class b extends a
{
public int x=30;
public void showvalues()
{
System.out.println("a.x="+super.x);
System.out.println("b.x="+x);
}
}
class overide2
{
public static void main(String args[])
{
b obj=new b();
obj.showvalues();
}
}
