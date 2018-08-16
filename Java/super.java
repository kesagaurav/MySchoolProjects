import java.lang.*;
class student
{
private String name;
private int rn;
public student(String name,int rn)
{
this.name=name;
this.rn=rn;
}
public void showstudent()
{
System.out.println("\n name="+name +"\n rn="+rn);
}
}
class marks extends student
{
private int m1,m2;
public marks(String name,int rn,int s1,int s2)
{
super(name,rn);
m1=s1;
m2=s2;
}
public void showmarks()
{
System.out.println("\n m1="+m1+"\n m2="+m2);
}
}
class in9
{
public static void main(String argv[])
{
marks obj=new marks("gaurav",31,98,100);
obj.showstudent();
obj.showmarks();
}
}

