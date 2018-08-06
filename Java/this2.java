import java.lang.*;
class A
{
private int x;
public void setx(int x)
{
this.x=x;
}
public void show()
{
System.out.println("\n x="+x);
}
}
class gaurav
{
public static void main(String args[])
{
A obj=new A();
obj.setx(10);
obj.show();
}
}
