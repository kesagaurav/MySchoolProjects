import java.lang.*;
class bank
{
private String name;
private int accno;
public void setbank(String name,int accno)
{
this.name=name;
this.accno=accno;
}
public void showbank()
{
System.out.println("\n name="+name +"\n accno="+accno);
}
}
class account
{
public static void main(String args[])
{
bank obj=new bank();
obj.setbank("gaurav",103);
System.out.println("\n bank account");
obj.showbank();
}
}
