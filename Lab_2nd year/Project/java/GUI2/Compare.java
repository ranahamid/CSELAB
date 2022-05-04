import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.*;
import java.awt.FlowLayout;
import java.awt.*;
import java.awt.Container;
import javax.swing.JButton;
import javax.swing.JTextField;

class string_Comp extends JFrame 
{
	public String st="",msg="";
	public String tx1="",tx2="";
		
	public JLabel lab1=new JLabel("String 1 : ");
	public JLabel lab2=new JLabel("String 2 : ");
	
	private Container c;
	public JPanel p=new JPanel();
	
	public  JTextField text1=new JTextField(20);
	public  JTextField text2=new JTextField(20);
	
	public JButton bt;

	public string_Comp()
	{
	super("Compare Two String");
	c=getContentPane();
	p.add(lab1);	
	p.add(text1);

	c.add(p);
	
	p.add(lab2);
	p.add(text2);
	c.add(p);
	
	bt=new JButton("Compare");
	p.add(bt);
	c.add(p);

	ButtonHandler handler=new ButtonHandler();
	bt.addActionListener(handler);

	}
	
	public  class  ButtonHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent event)
		{

		String s,s1;
	       s=text1.getText();
	       s1=text2.getText();

		int ui=s.compareTo(s1); 
			if(ui==0)
			    {
				msg="Yes";
				}
		else
				{
				msg="No";
				}
				 if(event.getSource()==bt)
								
		JOptionPane.showMessageDialog(null,msg);

			}
	}

}



public class   Compare 
{
	public static void main (String[] args) 
	{
	string_Comp cc=new string_Comp();
	cc.setSize(300,300);
	cc.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	cc.show(true);	
	}
}