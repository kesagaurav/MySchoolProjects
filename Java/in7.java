import java.lang.*;
class student
{
private String name;
private int accno;
public void setstudent(String name,int accno)
{
name=name;
accno=accno;
}
public void showstudent()
{
System.out.println("\n name="+name+"\n accno="+accno);
}
}
class marks extends student
{
private int m1,m2;
public void setmarks(int s1,int s2)
{
m1=s1;
m2=s2;
}
public void showmarks()
{
System.out.println("\n m1="+m1+"\n m2="+m2);
}
public void display()
{
showmarks();
showmarks();
}
}
class overide4
{
public static void main(String args[])
{
marks obj=new marks();
obj.setstudent("gaurav",531);
obj.setmarks(90,100);
obj.showstudent();
obj.display();
}
}
