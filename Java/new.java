import java.lang.*;
class college
{
private String name;
private String branch;
private String faculty;
private int id;
public void setcollege(String name,String branch,String faculty,int id)
{
this.name=name;
this.branch=branch;
this.faculty=faculty;
this.id=id;
}
public void showcollege()
{
System.out.println("\n name="+name +"\n branch="+branch +"\n faculty="+faculty +"\n id="+id);
}
}
class university
{
public static void main(String argv[])
{
college obj=new college();
obj.setcollege("gaurav","cse","srinivas",89);
obj.showcollege();
System.out.println("\n college details ...........................");
obj.showcollege();
}
}
