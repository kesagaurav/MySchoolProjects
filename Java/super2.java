import java.lang.*;
class student
{
private String name;
private int rn;
public student(String name ,int rn)
{
this.name=name;
this.rn=rn;
}
public void showstudent()
{
System.out.println("\n name="+name +"\n rn="+rn);
}
}
class internal1 extends student
{
private int m1,m2;
public internal1(String name,int rn,int s1,int s2)
{
super(name,rn);
this.m1=s1;
this.m2=s2;
}
public void showinternal1()
{
System.out.println("\n m1="+m1 +"\n m2="+m2);
}
}
class internal2 extends student
{
private int m1,m2;
public internal2(String name,int rn,int s1,int s2)
{
super(name,rn);
this.m1=s1;
this.m2=s2;
}
public void showinternal2()
{
System.out.println("\n m1="+m1+"\n m2="+m2);
}
}
class in10
{
public static void main(String argv[])
{
internal1 obj1=new internal1("gaurav",31,90,90);
internal2 obj2=new internal2("sriram",16,89,90);
System.out.println("\n internal1 details ..................................");
obj1.showstudent();
obj1.showinternal1();
System.out.println("\n internal2 details............................");
obj2.showstudent();
obj2.showinternal2();
}
}
