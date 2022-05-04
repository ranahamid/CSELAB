import java.io.*;
import java.net.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.*;
import java.util.List;
import java.awt.datatransfer.*;
import java.awt.dnd.*;

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
	super("Spider browser");
	browserPane=new WebBrowserPane();
	toolbar=new toolBar(browserPane);
	DropHandler handlerDrop=new DropHandler();
	browserPane.setDropTarget(new DropTarget(browserPane,DnDConstants.ACTION_COPY,handlerDrop));
	Container f=getContentPane();
	f.add(toolbar,BorderLayout.NORTH);
	f.add(new JScrollPane(browserPane),BorderLayout.CENTER);
	}
private class DropHandler implements DropTargetListener
{
	public void drop(DropTargetDropEvent event)
	{
		Transferable t=event.getTransferable();
		if(t.isDataFlavorSupported(DataFlavor.javaFileListFlavor))
		{
		event.acceptDrop(DnDConstants.ACTION_COPY);
		try
			{
			List list1=(List)t.getTransferData(DataFlavor.javaFileListFlavor);
			Iterator it=list1.iterator();
	//		Iterator iterator = list1.iterator();
			while(it.hasNext())
			   {
			   File f=(File)it.next();
			   browserPane.gotoURL(f.toURL());
			   }
			event.dropComplete(true);
		    }
		catch(Exception e)
		    {
			event.dropComplete(false);	
	     	}
		}
	}
	
 	public void dragEnter( DropTargetDragEvent event )
 	{
 	if(event.isDataFlavorSupported(DataFlavor.javaFileListFlavor))
 	   {
 	   event.acceptDrag(DnDConstants.ACTION_COPY);
 	   }
 	 else
 	 	event.rejectDrag();
 	}
 	public void dropActionChanged (DropTargetDragEvent event)
 	{
 	}
 	
   public void dragExit (DropTargetEvent event)
 	{
 	}

 	public void dragOver(DropTargetDragEvent event)
 	{
 	}
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