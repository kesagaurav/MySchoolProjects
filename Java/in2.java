import java.lang.*;
class A
{
public void circle(float r)
{
System.out.println("\n circle="+(3.14*r*r));
}
public void triangle(float a,float b)
{
System.out.println("\n triangle="+(0.5*a*b));
}
}
class B extends A
{
public void square(float s)
{
System.out.println("\n square="+(s*s));
}
}
class inh1
{
public static void main(String args[])
{
B obj=new B();
obj.circle(5);
obj.triangle(2,3);
obj.square(3);
}
}
