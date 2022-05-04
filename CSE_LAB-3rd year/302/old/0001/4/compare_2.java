import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

class com_string extends JFrame
{
	public JLabel jtext1=new JLabel("String 1 : ");
	public JLabel jtext2=new JLabel("String 2 : ");
	
	private Container c;
	public JTextField text1=new JTextField(20);
	public JTextField text2=new JTextField(20);
	
	JPanel p=new JPanel();
	public JButton bt;
	
	int i;
	String st1,st2,msg;
	
	com_string()
	{
	super("Forid Luicha");	
	c=getContentPane();
	
	p.add(jtext1);
	p.add(text1);
	c.add(p);
	
	p.add(jtext2);
	p.add(text2);
	c.add(p);
		
	bt=new JButton("Is forid luicha");
	p.add(bt);
	c.add(p);	

	ButtonHandler butHand=new ButtonHandler();
	bt.addActionListener(butHand);
	}	
		public class ButtonHandler implements ActionListener
		{
		public void actionPerformed(ActionEvent event)
			{
			if(event.getSource()==bt)
				{
				st1=text1.getText();
				st2=text2.getText();
				i=st1.compareTo(st2);
	
				if(i==0)
					 msg="Yes";
				else 
					 msg="No";
				JOptionPane.showMessageDialog(null,msg);
				}
			}	
		}
}

public class compare
{
	public static void main (String[] args) 
	{
	com_string c=new com_string();
	c.setSize(300,300);
	c.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	c.setVisible(true);
	}
}