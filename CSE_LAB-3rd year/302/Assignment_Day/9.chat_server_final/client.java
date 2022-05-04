import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import javax.swing.*;

class AppClient extends JFrame implements ActionListener,Runnable
{
 JButton b;
 JTextField tf;
 JTextArea ta;
 Socket s;
 PrintWriter pw;
 BufferedReader br;
 Thread th;
 public String userName;
 public AppClient()
 {
  super("Client Side Chatting");//Frame for Client
  try
		{
		UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		}
	catch(Exception e)
		{
		}
  addWindowListener(new W1());//add Window Listener to the Frame
  
  b=new JButton("Send");//Send Button
  b.addActionListener(this);//Add action listener to send button.
  tf=new JTextField(30);
  ta=new JTextArea(12,20);
  JPanel inputPanel=new JPanel();
  inputPanel.add(tf);
  inputPanel.add(b);
  add(inputPanel,BorderLayout.NORTH);
  add(new JScrollPane(ta),BorderLayout.CENTER);
  JLabel status=new JLabel();
  status.setText("Client Server");
  add(status,BorderLayout.SOUTH);
  try{
   s=new Socket(InetAddress.getLocalHost(),12000);//Socket for client
   //below line reads input from InputStreamReader
   br=new BufferedReader(new InputStreamReader(s.getInputStream()));
   //below line writes output to OutPutStream
   pw=new PrintWriter(s.getOutputStream(),true);
   userName=JOptionPane.showInputDialog("Enter Your Name");
   pw.println(userName);
  }catch(Exception e)  
  {
  JOptionPane.showMessageDialog(null,"Error in Connecting","Error!",JOptionPane.ERROR_MESSAGE);
			e.printStackTrace();
  }
  th=new Thread(this);//start a new thread
  th.setDaemon(true);//set the thread as demon
  th.start();

  setSize(400,400);//set the size
  setVisible(true);
  setLocation(100,300);//set the location
  validate();
 }

////////////

 private class W1 extends WindowAdapter
 {
  public void windowClosing(WindowEvent we)
  {
   System.exit(0);
  }
 }
 ///////////////

 public void actionPerformed(ActionEvent ae)
 {
  pw.println(tf.getText());//write the value of textfield into PrintWriter
  tf.setText("");//clean the textfield
 }
 
 //Thread running as a process in background
 public void run()
 {
  while(true)
  {
   try{
    ta.append(br.readLine()+"\n");//Append to TextArea
   }catch(Exception e) {}
  }
 }


}

public class client
{
  public static void main(String args[])
 {
  //Instantiate AppClient class
  AppClient client = new AppClient();
 }
}