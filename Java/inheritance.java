import java.lang.*;
class student
{
private String name;
private int id;
private int rn;
public void setstudent(String n,int a,int r)
{
name=n;
id=a;
rn=r;
}
public void showstudent()
{
System.out.println("\n name="+name+"\n rn="+rn+"\n id="+id);
}
}
class faculty extends student
{
private String name;
private int rm;
private String br;
private  int r;
public void setfaculty(String s,int roomno,String o,int id)
{
name=s;
rm=roomno;
br=o;
r=id;
}
public void showfaculty()
{
System.out.println("\n name="+name +"\n rm="+rm +"\n br="+br+"\nr="+r);
}
}
class libary
{
public static void main(String args[])
{
faculty obj=new faculty();
obj.setstudent("gaurav",58,31);
obj.setfaculty("srinivas",313,"cse",56);
obj.showstudent();
obj.showfaculty();
}
}
