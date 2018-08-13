import java.lang.*;
class sample
{
private int x;
public void setx(int a)
{
x=a;
}
public void showx()
{
System.out.println("x="+x);
}
public void sum(sample ob1,sample ob2)
{
x=ob1.x+ob2.x;
}
}
class sum1
{
public static void main(String argv[])
{
sample obj1,obj2,obj3;
obj1=new sample();
obj2=new sample();
obj3=new sample();
obj1.setx(700);
obj2.setx(800);
obj3.sum(obj1,obj2);
System.out.println("\n obj......................");
obj1.showx();
System.out.println("\n obj2..........");
obj2.showx();
System.out.println("\n obj3..............");
obj3.showx();
}
}
