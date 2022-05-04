import java.io.*;
import java.net.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.*;
import java.util.List;

class TabPanel extends JFrame
{
	public JDesktopPane desktop=new JDesktopPane();

	public TabPanel()
	{
	super("Tab Frame");

	createNewTab();
//	Container c1=getContentPane();
//	c1.add(desktop);
	add(desktop);
	
	JMenu file=new JMenu("File");
	file.setMnemonic('F');
	JMenuItem newtab=new JMenuItem("New tab");
	newTabHandler handlertab=new newTabHandler();
	newtab.addActionListener(handlertab);
	newtab.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N,InputEvent.CTRL_MASK));
	file.add(newtab);
	JMenuItem exittab=new JMenuItem("Exit tab");
	exittab.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_F4,InputEvent.ALT_MASK));
	exittab.setMnemonic('E');
	ExitHandler handlerexit=new ExitHandler();
	exittab.addActionListener(handlerexit);
	file.add(exittab);
	JMenuBar bar=new JMenuBar();
	bar.add(file);
	setJMenuBar(bar);

	}
	
	////////
 public void createNewTab()
 {
    WebBrowserPane browserPane;
    toolBar toolbar;
	JInternalFrame frame=new JInternalFrame("Frame",true,true,true,true);
	browserPane=new WebBrowserPane();
	toolbar=new toolBar(browserPane);
	Container c=frame.getContentPane();
	c.add(toolbar,BorderLayout.NORTH);
	c.add(new JScrollPane(browserPane),BorderLayout.CENTER);
	frame.setVisible(true);
	frame.setSize(320,240);
	int offset=30*desktop.getAllFrames().length;
	frame.setLocation(offset,offset);
	desktop.add(frame);
 }
private class newTabHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	createNewTab();	
	}
}
/////
private class ExitHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	System.exit(0);	
	}
}
}

class WebBrowserPane extends JEditorPane
{
	public List historyList=new ArrayList();
	public int historyIndex;
	public WebBrowserPane()
	{
	setEditable(false);
	}
	public void gotoURL(URL url)
	{
	displayPage(url);
	historyList.add(url);
	historyIndex=historyList.size()-1;
	}
	public URL forward()
	{
	historyIndex++;
	if(historyIndex>=historyList.size())
		historyIndex=historyList.size()-1;
	URL url=(URL) historyList.get(historyIndex);
	displayPage(url);
	return url;
	}
	
	public URL backward()
	{
	historyIndex--;
	if(historyIndex<0)
		historyIndex=0;	
	URL url=(URL)historyList.get(historyIndex);
	return url;
	}
	public void displayPage(URL url)
	{
		try
		{
		setPage(url);
		}
	    catch(Exception e)
	    {
	    JOptionPane.showMessageDialog(null,"Error Caught!","Error!",JOptionPane.ERROR_MESSAGE);
	    }
	}
}

///////////////////////////////////////////////////////////
class toolBar extends JToolBar
{
public 	WebBrowserPane browserPane;
public JTextField urlField;
public JButton back,forward;

public toolBar(WebBrowserPane browser)
	{
	super("Simple web Browser");
	browserPane = browser;
	HyperlinkHandler handlerHyperlink=new HyperlinkHandler();
	browserPane.addHyperlinkListener(handlerHyperlink);
	
	back=new JButton("Back");
	backwardButtonHandler handlerBackward=new backwardButtonHandler();
	back.addActionListener(handlerBackward);
	
	forward=new JButton("Forward");
	forwardButtonHandler handlerForwar=new forwardButtonHandler();
	back.addActionListener(handlerForwar);
	
	urlField=new JTextField(25);
	URLFiledHandler handlerUrlFiled=new  URLFiledHandler();
	urlField.addActionListener(handlerUrlFiled);
		
	add(back);
	add(forward);
	add(urlField);
	}


private class URLFiledHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	try{
		URL url=new URL(urlField.getText());	
		browserPane.gotoURL(url);
	   }
	catch(MalformedURLException urlException)
	  {
	  urlException.printStackTrace();
	  }	
	}
}



private class forwardButtonHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	URL url=browserPane.forward();
	urlField.setText(url.toString());	
	}
}


private class backwardButtonHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	URL url=browserPane.backward();
	urlField.setText(url.toString());	
	}
}



private class HyperlinkHandler implements HyperlinkListener
   {
   public void hyperlinkUpdate(HyperlinkEvent event)
      {
      if(event.getEventType()==HyperlinkEvent.EventType.ACTIVATED)
           {
           URL url=event.getURL();
           browserPane.gotoURL(url);
           urlField.setText(url.toString());
           }
      }
   }    	
}






////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////
 
class web
{
	public static void main (String[] args) 
	{
	TabPanel w=new TabPanel();
	w.setSize(640,480);
	w.setVisible(true);
	w.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
/*
 
 file:///H:/Education/CSE/education/Home_programming/java%20program/java_02/file.java
 file:///D:/Soft/E600/Net_File/21/Downloads/New%20Folder/vectir.htm
 
 file:///H:/Education/Tutorial/web%20programming/index.htm




*/