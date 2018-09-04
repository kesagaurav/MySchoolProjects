import java.lang.*;
interface inter1
{
public void sum(int x,int y);
}
interface inter2
{
public void mult(int x,int y);
}
class myclass implements inter1,inter2
{
public void sum(int x,int y)
{
System.out.println("\n sum="+(x+y));
}
public void mult(int x,int y)
{
System.out.println("\nmult="+(x*y));
}
}
class in3
{
public static void main(String argv[])
{
myclass obj=new myclass();
obj.sum(10,20);
obj.mult(6,2);
}
}
