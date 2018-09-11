import java.lang.*;
class bank
{
private String name;
private int accno;
public void setbank(String n,int a)
{
name=n;
accno=a;
}
public String toString()
{
return "\n name="+name +"\n accno="+accno;
}
}
class tostring
{
public static void main(String args[])
{
bank obj=new bank();
obj.setbank("gaurav",123);
System.out.println("\n bank:"+obj);
String str="bank details:"+obj;
System.out.println("\n str=:"+str);
String str1=obj.toString();
System.out.println("\n str1:"+str1);
}
}
