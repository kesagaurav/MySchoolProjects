import java.lang.*;
class thread
{
public static void main(String argv[])
{
System.out.println("\n main thread starts");
Thread t=Thread.currentThread();
System.out.println("\n threadname:"+t.getName());
System.out.println("\n prority number:"+t.getPriority());
t.setName("gaurav");
t.setPriority(9);
System.out.println("\n thread details after change:+t");
System.out.println("\n thread name:"+t.getName());
System.out.println("\n priority number:"+t.getPriority());
try
{
for(int i=5;i>0;i--)
System.out.println("\n main thread:"+i);
Thread.sleep(2000);
}
catch(InterruptedException e)
{
System.out.println("\n error:"+e);
}
System.out.println("\n main terminates");
}
}




