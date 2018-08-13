import java.awt.*;
import java.awt.event.*;
class mywindow extends frame
{
public mywindow(String title)
{
super(title);
addwindowListener(new mywindowhandler());
}
public void paint(Graphics g)
{
g.drawString("frame window",100,100);
}
class mywindowhandler extends windowAdapter
{
public void windowclosing(windowEvent e)
{
dispose();
}
}
}
class win1
{
public static void main(String argv[])
{
mywindow w=new mywindow("frame window");
w.setSize(400,400);
w.setVisible(true);
}
}
