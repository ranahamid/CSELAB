import javax.swing.*;

class sample extends  JFrame
	{

sample()
{
	super.setSize(250,250);
	super.setTitle("First GUI Program");
	super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	
	
	java.awt.Container c=getContentPane();
	javax.swing.JLabel l1=new JLabel();
	JPanel j1=new JPanel();
	
	javax.swing.JLabel l2=new JLabel();
	//JPanel j2=new JPanel();
	javax.swing.JTextField t1=new JTextField(10);
	javax.swing.JTextField t2=new JTextField(10);	
	
	l1.setText("User Name");
	l2.setText("PassWord");

	j1.add(l1);
	j1.add(t1);
	j1.add(l2);
	j1.add(t2);
	
	c.add(j1);
	
	show(true);
	}	
}


public class GUI_3
{

public static void main (String[] args) 
	{
					   
	new sample();				   
	}
}


