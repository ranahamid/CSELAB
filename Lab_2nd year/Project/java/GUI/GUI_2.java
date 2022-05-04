import javax.swing.JOptionPane;

public class GUI_2
{
	public static void main (String[] args) 
	{
		String s1,s2;
		int firstNumber,secondNumber,total;
		s1=JOptionPane.showInputDialog("Input for First Integer");
		s2=JOptionPane.showInputDialog("Input for Second Integer");
		
		firstNumber=Integer.valueOf(s1);
		secondNumber=Integer.valueOf(s2);
		
		total=firstNumber+secondNumber;
		JOptionPane.showMessageDialog(null,"Addition of two numers is : "+total,"Summation of Two Numbers",JOptionPane.PLAIN_MESSAGE);    
	}
}