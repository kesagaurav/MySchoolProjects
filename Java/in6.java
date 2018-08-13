import java.lang.*;
class method
{
public void show()
{
System.out.println("\n show of A class");
}
}
class instance extends method
{
public void show()
{
System.out.println("\n show of B class");
}
public void display()
{
show();
show();
}
}
class overide3
{
public static void main(String args[])
{
instance obj=new instance();
obj.display();
}
}

