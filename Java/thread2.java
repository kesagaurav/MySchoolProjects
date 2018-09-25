import java.lang.*;
class userthread extends Thread
{
public userthread(String tname)
{
super(tname);
System.out.println("\n main thread starts:"+this);
start();
}
public void run()
{
System.out.println("\n main thread starts");
try
{
for(int i=5;i>0;i--)
{
System.out.println("\n child:"+i);
Thread.sleep(2000);
}
}
catch(Exception e)
{
System.out.println("\n error:"+e);
}
System.out.println("\n thread terminates");
}
}
class thread2
{
public static void main(String argv[])
{
userthread obj=new userthread("apex");
try
{
for(int i=5;i>0;i--)
System.out.println("child:"+i);
Thread.sleep(3000);
}
catch(Exception e)
{
System.out.println("\n error:"+e);
}
}
}

