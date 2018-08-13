import java.lang.*;
class student
{
private String name;
private int rn;
public void setstudent(String name,int rn)
{
this.name=name;
this.rn=rn;
}
public void showstudent()
{
System.out.println("\n name="+name+"\n rn="+rn);
}
}
class marks extends student
{
private int m1,m2;
public void setmarks(int s1,int s2)
{
this.m1=s1;
this.m2=s2;
}
public void showmarks()
{
System.out.println("\n m1="+m1+"\n m2="+m2);
}
}
class yamu
{
public static void main(String args[])
{
marks obj=new marks();
obj.setstudent("gaurav",531);
obj.setmarks(90,100);
obj.showstudent();
obj.showmarks();
}
}
