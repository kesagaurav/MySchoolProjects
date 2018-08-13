import java.lang.*;
class hospital
{
private String location;
public void sethospital(String l)
{
location=l;
}
public void showhosipital()
{
System.out.println("\n location="+location);
}
}
class department extends hospital
{
private String card;
private String den;
private  String onc;
public void setdepartment(String cardilogy,String dentist,String oncognist)
{
card=cardilogy;
den=dentist;
onc=oncognist;
}
public void showdepartment()
{
System.out.println("\n card="+card +"\n den="+den +"\n onc="+onc);
}
}
class staff extends department
{
private String name;
private int id;
public void setstaff(String n,int a)
{
name=n;
id=a;
}
public void showstaff()
{
System.out.println("\n name="+name +"\n id="+id);
}
}
class hos
{
public static void main(String args[])
{
staff obj=new staff();
obj.sethospital("warangal");
obj.setdepartment("srinivas","rajinikant","sharma");
obj.setstaff("unus",78);
obj.showhosipital();
obj.showdepartment();
obj.showstaff();
}
}

