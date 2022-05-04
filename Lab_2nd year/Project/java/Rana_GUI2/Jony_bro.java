import java.awt.FlowLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JButton;
class jj extends JFrame
{
	JTextField t,t1;
	JButton b;
	public jj()
	{
		setLayout(new FlowLayout());
		add(t=new JTextField(10));
		add(t1=new JTextField(10));
		add(b=new JButton("click"));
		Han h=new Han();
		b.addActionListener(h);
	}
	private class Han implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			String s;
				s=t.getText();
			if(e.getSource()==b)
		
			t1.setText(s);
		}
	}
}



 class   Compare 
{
	public static void main (String[] args) 
	{
	jj cc=new jj();
	cc.setSize(300,300);
	cc.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	cc.show(true);	
	}
}