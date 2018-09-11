import java.lang.*;
class DepositException extends Exception
{
private String errmsg="";
public DepositException (String msg)
{
	errmsg=msg;
}
public String toString()
{
return errmsg;
}
}
class bank
{
private String name;
private int accno;
private double bal;
public void createaccount(String n,int a,double amt) throws DepositException
{
try
{
if(amt<1000)
throw new DepositException("minimum balance is 1000");
name=n;
accno=a;
bal=amt;
System.out.println("\n account created");
}
catch(DepositException e)
{
System.out.println("\n error:"+e);
}
}
public void showaccount()
{
System.out.println("\n name="+name+"\n accono="+accno+"\n bal="+bal);
}
}
class gaurav
{
public static void main(String args[]) throws DepositException
{
bank obj1=new bank();
obj1.createaccount("kumar",102,2000.00);
System.out.println("\n obj1");
obj1.showaccount();
bank obj2=new bank();
obj2.createaccount("raju",103,400.00);
System.out.println("\n obj2");
obj2.showaccount();
}
}
 