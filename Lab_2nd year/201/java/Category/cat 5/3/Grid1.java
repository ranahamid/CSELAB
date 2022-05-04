//Grid Layout
import javax.swing.*;
import java.awt.*;

import java.awt.event.ActionListener;
import java.awt.Container;
import java.awt.event.ActionEvent;

class Grid_Layout extends JFrame implements ActionListener
{
	private JButton but[];
	private final String name[]={"6","7","8","9","AC",
								 "2","3","4","5","MR",
								 "0","1","+","-","C",
								 "*","/","%","sq","=",};
//	private Container c;

	private GridLayout gr_lay1;
	private JTextField text=new JTextField(30);
	
	public Grid_Layout()
	{
		super("A simple Calculator");
	//	c=getContentPane();
		gr_lay1=new GridLayout(4,5,6,6);
		setLayout(gr_lay1);
		but=new JButton[name.length];
		for(int i=0;i<name.length;i++)
		{
			but[i]=new JButton(name[i]);
			but[i].addActionListener(this);
			add(but[i]);
		}
		
	}
	public void actionPerformed(ActionEvent event)
	{
		//
	}
	
	
}  


public class Grid1
{
	public static void main (String[] args) 
		{
			Grid_Layout gr_lay =new Grid_Layout();
			gr_lay.setSize(300,300);
			gr_lay.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			gr_lay.show(true);
		}
}