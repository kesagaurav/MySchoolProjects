import java.lang.*;
class family
{
private String father;
private String mother;
private String son;
private String daughter;
public void setfamily(String father,String mother,String son,String daughter)
{
this.father=father;
this.mother=mother;
this.son=son;
this.daughter=daughter;
}
public void show()
{
System.out.println("\n father="+father +"\n mother="+mother +"\n son="+son +"\n daughter="+daughter);
}
}
class bound
{
public static void main(String args[])
{
family obj=new family();
obj.setfamily("suryaprakaash","deepa","gaurav","susheela");
System.out.println("\n bounding family");
obj.show();
}
}
