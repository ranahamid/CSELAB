import java.io.*;
import java.net.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.*;
import java.util.List;


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

class webPanel extends JFrame
{
	public  WebBrowserPane browserPane;
	public toolBar toolbar;
	public webPanel()
	{
	super("Spilt Spider browser");
	browserPane=new WebBrowserPane();
	toolbar=new toolBar(browserPane);
	WebBrowserPane secondBrowserpane=new WebBrowserPane();

	secondBrowserpane.gotoURL(getClass().getResource("help-doc.html"));
	JSplitPane pane=new	JSplitPane(	JSplitPane.HORIZONTAL_SPLIT,new JScrollPane(secondBrowserpane) ,new JScrollPane(browserPane));
	pane.setDividerLocation(210);
	pane.setOneTouchExpandable(true);
	Container f=getContentPane();
	f.add(toolbar,BorderLayout.NORTH);
	//f.add(new JScrollPane(browserPane),BorderLayout.CENTER);
	f.add(pane,BorderLayout.CENTER);
	}

}


//////////////////////////////////////////////////////
 
class web
{
	public static void main (String[] args) 
	{
	webPanel w=new webPanel();
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