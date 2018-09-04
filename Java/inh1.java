import java.lang.*;
interface inter1
{
void sum(int x,int y);
void sub(int x,int y);
}
class myclass implements inter1
{
public void sum(int x,int y)
{
System.out.println("\n sum="+(x+y));
}
public void sub(int x,int y)
{
System.out.println("\n sub="+(x-y));
}
public void mult(int x,int y)
{
System.out.println("\n mult="+(x*y));
}
}
class inh1
{
public static void main(String args[])
{
myclass obj=new myclass();
obj.sum(10,20);
obj.sub(30,20);
obj.mult(2,3);
}
}
