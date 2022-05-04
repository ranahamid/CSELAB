import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class com extends JFrame
{
	public JLabel lab1=new JLabel("String 1 : ");
	public JLabel lab2=new JLabel("String 2 : ");
	private Container c;
	String st1,st2,st3,st4;
	public  JPanel p=new JPanel();
	public JTextField jtext1=new JTextField(20);
	public JTextField jtext2=new JTextField(20);
	public JButton bt;
	
	public com()
	{
	super("String Compare");
	c=getContentPane();
	p.add(lab1);
	p.add(jtext1);
	c.add(p);
	
	p.add(lab2);
	p.add(jtext2);
	c.add(p);
	
	bt=new JButton("Compare");
	p.add(bt);
	c.add(p);
	
	
	ButtonHandler butHand=new ButtonHandler();
	bt.addActionListener(butHand);

	}
	public class ButtonHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent event)
		{
		st1=jtext1.getText();
		st2=jtext2.getText();
		
		if(event.getSource()==bt)
		{
			int i=st1.compareTo(st2);
			if(i==0)
				st3="Yes";
			else 
				st3="No";
			JOptionPane.showMessageDialog(null,st3);
		
			}
		}
	}
}

  class   Compare2
{
	public static void main (String[] args) 
	{
	
	com c=new com();
	c.setSize(300,400);
	c.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	c.show(true); 	
	}
}