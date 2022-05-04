//Developed by
//Rana Hamid
//CSE-RU
//+880-1717-623876


//import javax.swing.*;//
import javax.swing.border.LineBorder;
import javax.swing.JList;
import javax.swing.ListSelectionModel;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import javax.swing.JPopupMenu;
import javax.swing.JFileChooser;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JColorChooser;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.ButtonGroup;
import javax.swing.JRadioButtonMenuItem;
import javax.swing.JCheckBoxMenuItem;
import javax.swing.ImageIcon;
import javax.swing.SwingConstants;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.KeyStroke;
import javax.swing.UIManager;
import javax.swing.SwingUtilities;



//import java.awt.*;
import java.awt.Point;
import java.awt.GraphicsEnvironment;
import java.awt.Font;
import java.awt.FlowLayout;
import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.Color;
import java.awt.Label;
import java.awt.ScrollPane;
import java.awt.TextField;

//import java.awt.event.*;
import java.awt.event.MouseListener;
import java.awt.event.MouseEvent;
import java.awt.Component;
import java.awt.event.MouseAdapter;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.InputEvent;





//import java.io.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;

//import javax.swing.event.*;
import javax.swing.event.UndoableEditListener;
import javax.swing.event.UndoableEditEvent;

//import javax.swing.filechooser.*;
import javax.swing.filechooser.FileFilter;
import javax.swing.filechooser.FileNameExtensionFilter;



//import java.util.*;
import java.util.List;
import java.util.Calendar;
import java.util.Iterator;
import java.util.Vector;



//import java.awt.datatransfer.*;
import java.awt.datatransfer.DataFlavor;
import java.awt.datatransfer.Transferable;


//import java.awt.dnd.*;
import java.awt.dnd.DnDConstants;
import java.awt.dnd.DropTargetDragEvent;
import java.awt.dnd.DropTargetListener;
import java.awt.dnd.DropTargetEvent;
import java.awt.dnd.DropTargetListener;
import java.awt.dnd.DropTarget;
import java.awt.dnd.DropTargetDropEvent;


import javax.swing.undo.UndoManager;
import javax.swing.text.Document;
import java.awt.print.PrinterJob;
import javax.print.attribute.HashPrintRequestAttributeSet;
import java.text.SimpleDateFormat;



class menu extends JFrame
{
	public JLabel infoArea2;
	
	
	Component selectedComponent;
	public Color colorName[]={Color.BLACK,Color.BLUE,Color.RED,Color.GREEN};
	public JRadioButtonMenuItem colorRadioMenu[],fontRadioMenu[],UIRadio[];
	public JCheckBoxMenuItem fontStyle[],wrapfont;
	public ButtonGroup colorGroup,fontGroup,UIGroup;

	public JTextArea  label1;

	public int style;
	public int sizeOfFont=18;
	public String currentFont;
	
	
	
	
	public int caretPosition=0;
	public int lineCount=0;
	public String strColumnCount;
	public String strLineCount;
	
	public File nameOfFile;
	public String nameOfFileString="";
	public Color color1;
	public Color color2;
	public Color CurrentColor1=Color.WHITE,CurrentColor2=Color.BLACK;

	public boolean textChange=false;
	JMenuItem EditUndo,EditRedo,EditCopy,EditCut,EditSelectAll,EditDelete,EditPaste,EditTime;
	JMenuItem FileNew,Fileopen,FileSave,FileSaveAs,FilePrint,FileClose,Fileexit;
	JMenuItem FormatUpper,FormatLower;
	
	
	public UIManager.LookAndFeelInfo looks[];
	public final String UIName[];
	UndoManager u=new UndoManager();
	
	public menu()
	{
	setTitle("Untitled Document");
		looks=UIManager.getInstalledLookAndFeels(); 
		UIName=new String[looks.length];
		for(int i=0;i<looks.length;i++)
			UIName[i]=looks[i].getName();
      try 
    	{
    	UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
    	}
    catch(Exception e12)
    	{
    	 e12.printStackTrace();
    	}
    	
//status bar-------------
	infoArea2=new JLabel();
	infoArea2.setText("                                  "+
    	"                                        "+
    	"Char  length : "+(0)+"         Line: "+0);

	JPanel content=new JPanel();

	 JScrollPane pane = new JScrollPane(label1);
	 pane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
     pane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);
          
     JPanel inputPanel = new JPanel();
     inputPanel.setLayout( new BorderLayout( 5  , 5 ) );
     inputPanel.add( pane );
          
          
    content.setLayout(new BorderLayout(5, 5));
 

  
    content.add(inputPanel, BorderLayout.CENTER);
    content.add(infoArea2, BorderLayout.SOUTH);	
	this.setContentPane(content); 
		
//status bar-----------	
	
	JMenu fileMenu=new JMenu("File");
	fileMenu.setMnemonic('F');
	//////////////////  ///////////////////
	
	 FileNew=new JMenuItem("New");
	 FileNew.setMnemonic('N');
	 FileNew.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N,InputEvent.CTRL_MASK));

	 FileNewHandler handlerNewFile=new FileNewHandler();
	 FileNew.addActionListener(handlerNewFile);
	 fileMenu.add(FileNew);

	//OPen
	Fileopen=new JMenuItem("Open");
	Fileopen.setMnemonic('O');
	Fileopen.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_O,InputEvent.CTRL_MASK));
	OPenHandler handlerOPen=new OPenHandler();
	Fileopen.addActionListener(handlerOPen);
	fileMenu.add(Fileopen);	
	fileMenu.addSeparator();
	///
	FileSave=new JMenuItem("Save");
	FileSave.setMnemonic('S');
	FileSave.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S,InputEvent.CTRL_MASK));
	SaveFileHandler handlerSave=new SaveFileHandler();
	FileSave.addActionListener(handlerSave);
	fileMenu.add(FileSave);
	///
	FileSaveAs=new JMenuItem("Save As");
	FileSaveAs.setMnemonic('A');
	FileSaveAs.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_F12,0));
	SaveAsFileHandler handlerSaveAs=new SaveAsFileHandler();
	FileSaveAs.addActionListener(handlerSaveAs);
	fileMenu.add(FileSaveAs);
	fileMenu.addSeparator();
	//
	FilePrint=new JMenuItem("Print");
	FilePrint.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_P,InputEvent.CTRL_MASK));
	FilePrint.setMnemonic('P');
	FilePrintHandler handlerPrint=new FilePrintHandler();
	FilePrint.addActionListener(handlerPrint);
	fileMenu.add(FilePrint);
	fileMenu.addSeparator();
	//
	FileClose=new JMenuItem("Close");
	FileCloseHandler handlerClose=new FileCloseHandler();
	FileClose.addActionListener(handlerClose);
	FileClose.setMnemonic('C');
	FileClose.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_W,InputEvent.CTRL_MASK));
	fileMenu.add(FileClose);
	
	Fileexit=new JMenuItem("Exit");
	Fileexit.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_F4,InputEvent.ALT_MASK));
	Fileexit.setMnemonic('E');
	exitHandler handlerExit=new exitHandler();
	Fileexit.addActionListener(handlerExit);
	fileMenu.add(Fileexit);
	///
	///
	JMenuBar bar=new JMenuBar();
	setJMenuBar(bar);
	bar.add(fileMenu);
	

//////////////////  ///////////////////
	JMenu Edit=new JMenu("Edit");
	Edit.setMnemonic('E');
	EditUndo=new JMenuItem("Undo");
	EditUndo.setMnemonic('U');
	EditUndo.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Z,InputEvent.CTRL_MASK));
	UndoHandler handlerUndo=new UndoHandler();
	EditUndo.addActionListener(handlerUndo);
	Edit.add(EditUndo);
	
	EditRedo=new JMenuItem("Redo");
	EditRedo.setMnemonic('R');
	EditRedo.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Y,InputEvent.CTRL_MASK));
	RedoHandler handlerRedo=new RedoHandler();
	EditRedo.addActionListener(handlerRedo);
	Edit.add(EditRedo);
	Edit.addSeparator();
	
	
	EditCopy=new JMenuItem("Copy");
	EditCopy.setMnemonic('C');
	EditCopy.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_C,InputEvent.CTRL_MASK));
	
	EditCut=new JMenuItem("Cut");
	EditCut.setMnemonic('T');
	EditCut.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_X,InputEvent.CTRL_MASK));

	EditPaste=new JMenuItem("Paste");
	EditPaste.setMnemonic('P');
	EditPaste.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_V,InputEvent.CTRL_MASK));

	EditSelectAll=new JMenuItem("Select All");
	EditSelectAll.setMnemonic('S');
	EditSelectAll.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_A,InputEvent.CTRL_MASK));

	EditDelete=new JMenuItem("Delete");
	EditDelete.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_DELETE,0));

	EditDelete.setMnemonic('D');
	EditMenuHandler handlerEdit=new EditMenuHandler();
	EditCopy.addActionListener(handlerEdit);
	EditCut.addActionListener(handlerEdit);
	EditSelectAll.addActionListener(handlerEdit);
	EditDelete.addActionListener(handlerEdit);
	EditPaste.addActionListener(handlerEdit);
	Edit.add(EditCopy);
	Edit.add(EditCut);
	Edit.add(EditPaste);
	Edit.addSeparator();
	Edit.add(EditSelectAll);
	Edit.add(EditDelete);
	Edit.addSeparator();
	EditTime=new JMenuItem("Time");
	EditTimeHandler handlerTime=new EditTimeHandler();
	EditTime.addActionListener(handlerTime);
	EditTime.setMnemonic('T');
	EditTime.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_F5,0));
	Edit.add(EditTime);
	
	bar.add(Edit);
	
	JMenu view=new JMenu("View");
	view.setMnemonic('V');
	JMenu UIy=new JMenu("UI");
	UIRadio=new JRadioButtonMenuItem[UIName.length];
	UIGroup=new ButtonGroup();
	UIhandler handlerUI=new UIhandler();
	for(int i=0;i<UIName.length;i++)
	  {
	  UIRadio[i]=new JRadioButtonMenuItem(UIName[i]);
	  UIRadio[i].addActionListener(handlerUI);
	  UIy.add(UIRadio[i]);
	  UIGroup.add(UIRadio[i]);
	  }
	UIRadio[3].setSelected(true);	 
	view.add(UIy);		
	view.addSeparator();
	
	JMenuItem changeBk=new JMenuItem("Change Background");
	changeBk.setMnemonic('B');
	BackgruondButtonHandler backgruondHandler=new BackgruondButtonHandler();
	changeBk.addActionListener(backgruondHandler);
	view.add(changeBk);
		////
	JMenuItem changeFG=new JMenuItem("Change Font Color");
	changeFG.setMnemonic('C');
	ForeButtonHandlerButtonHandler ForeButtonHandlerHandler=new ForeButtonHandlerButtonHandler();
	changeFG.addActionListener(ForeButtonHandlerHandler);
	view.add(changeFG);
	view.addSeparator();
	
	
    final JMenuItem find=new JMenuItem("Find-Replace");
	find.setMnemonic('F');
	view.add(find);
	
	
	//find finder;
//	finder = new find(this);
//	finder.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
	
	final find fcd;
	fcd = new find(this);
	fcd.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
	find.addActionListener(
	
      new ActionListener() {
      	
      	public void actionPerformed(ActionEvent event1)
      	{       
 if(event1.getSource()==find)
	{

        fcd.setVisible(true);;
    }
    
 }}
 );  
	
	
	
	
	bar.add(view);
	
	//////////////////  ///////////////////	
	JMenu formatMenu=new JMenu("Format");
	formatMenu.setMnemonic('O');
	
		////
	fontRadioMenuitemHandler handler=new fontRadioMenuitemHandler();
	
	
	String fontName[]={"Serif","Monospaced","SansSerif"};
	
  
	
	final JMenuItem fontMenu1=new JMenuItem("Font");
	fontMenu1.setMnemonic('O');
//	fontMenu1.addActionListener(handler);

	final font_chooser fc;
	fc = new font_chooser(this);
	fontMenu1.addActionListener(

      new ActionListener() {
      	
      	public void actionPerformed(ActionEvent event)
      	{       
 if(event.getSource()==fontMenu1)
	{

        fc.window.setVisible(true);
    }
    
 }}
 );  
	
	
	//////////////////  ///////////////////	
	
	
	
	JMenu fontMenu=new JMenu("Font Lite");
	
	fontRadioMenu=new JRadioButtonMenuItem[fontName.length];
	fontGroup=new ButtonGroup();
	for(int i=0;i<fontName.length;i++)
	  {
	  fontRadioMenu[i]=new JRadioButtonMenuItem(fontName[i]);
	  fontMenu.add(fontRadioMenu[i]);
	  fontGroup.add(fontRadioMenu[i]);
	  fontRadioMenu[i].addActionListener(handler);
	  }
	fontRadioMenu[0].setSelected(true);
	fontMenu.addSeparator();	
	
	
		////
	String styleName[]={"Bold","Italic"};
	fontStyle=new JCheckBoxMenuItem[styleName.length];
	setStyleHandler styleHandler=new setStyleHandler();
	for(int i=0;i<fontStyle.length;i++)
		{
		fontStyle[i]=new JCheckBoxMenuItem(styleName[i]);
		fontMenu.add(fontStyle[i]);
		fontStyle[i].addItemListener(styleHandler);
		}
	formatMenu.add(fontMenu1);
	formatMenu.add(fontMenu);

		////
	JMenuItem fontSize=new JMenuItem("Font Size");
	fontSize.setMnemonic('S');
	FontSizeHandler handlerFontSize=new FontSizeHandler();
	fontSize.addActionListener(handlerFontSize);
	formatMenu.add(fontSize);
	formatMenu.addSeparator();
	////
	

	FormatUpper=new JMenuItem("Upper Case");
	FormatUpper.setMnemonic('U');
	StringtoUpper handlerUpper=new StringtoUpper();
	FormatUpper.addActionListener(handlerUpper);
	formatMenu.add(FormatUpper);
	
	
	FormatLower=new JMenuItem("Lower Case");
	FormatLower.setMnemonic('L');
	StringtoLower handlerLower=new StringtoLower();
	FormatLower.addActionListener(handlerLower);
	formatMenu.add(FormatLower);
	
	
	
	wrapfont=new JCheckBoxMenuItem("Wrap Line");
	wrapfont.setMnemonic('W');
	wrapfont.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_W,InputEvent.CTRL_MASK));
	wrapfont.setSelected(true);
	WrapLineHandler handlerWrap=new WrapLineHandler();
	wrapfont.addActionListener(handlerWrap);
	formatMenu.addSeparator();
	formatMenu.add(wrapfont);
	
	

	bar.add(formatMenu);
	//////////////////  ///////////////////	
	JMenu Help=new JMenu("Help");
	Help.setMnemonic('H');
	JMenuItem about=new JMenuItem("About...");
	about.setMnemonic('A');
	about.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_F1,0));
	aboutHandler handlerAbout=new aboutHandler();
	about.addActionListener(handlerAbout);
	Help.add(about);
	bar.add(Help);
	
	label1=new JTextArea();
	label1.setForeground(colorName[0]);
	label1.setFont(new Font("Serif",Font.PLAIN, sizeOfFont));
	label1.setLineWrap(true);
 	label1.setWrapStyleWord(true);
	
	DropHandler handlerDrop=new DropHandler();
	label1.setDropTarget(new DropTarget(label1,DnDConstants.ACTION_COPY,handlerDrop));
	
	Document doc=label1.getDocument();
	DocEditHandler handlerDocEdit=new DocEditHandler();
	doc.addUndoableEditListener(handlerDocEdit);
   	  
   	  
   
   	  
	currentFont="Serif";
//	getContentPane().setBackground(Color.red);
	keyBoardHandler handlerKeyBoard=new keyBoardHandler ();
	label1.addKeyListener(handlerKeyBoard);
	//add(label1,BorderLayout.CENTER);
	add(new JScrollPane(label1),BorderLayout.CENTER);
	//pop up
	 final JPopupMenu colorMenu = new JPopupMenu("Color");
    colorMenu.add(makeMenuItem("Undo"));
    colorMenu.addSeparator();
    colorMenu.add(makeMenuItem("Cut"));
    colorMenu.add(makeMenuItem("Copy"));
    colorMenu.add(makeMenuItem("Paste"));
    colorMenu.add(makeMenuItem("Delete"));
    colorMenu.addSeparator();
    colorMenu.add(makeMenuItem("Select All"));
    
 
 	//////////////////  ///////////////////
    
	MouseListener mouseListener = new MouseAdapter() 
    {
      public void mousePressed(MouseEvent e) 
      		{ 
      		checkPopup(e); 
      		}
      public void mouseClicked(MouseEvent e) 
      		{ 
      		checkPopup(e);
      		caretPosition = label1.getCaretPosition()+1;  
	String strColumnCount = Integer.toString(caretPosition);
       
     lineCount = label1.getLineCount();
    
//convert int to string   
	String strLineCount = Integer.toString(lineCount); 
    
    infoArea2.setText("                                  "+
    	"                                        "+
    	"Char  length : "+(strColumnCount)+"         Line: "+strLineCount); 
      		}
      public void mouseReleased(MouseEvent e) 
      		{ 
      		checkPopup(e); 
      		}
      private void checkPopup(MouseEvent e) 
      	{
        if (e.isPopupTrigger(  )) 
        	{
         	 selectedComponent = e.getComponent(  );
          	colorMenu.show(e.getComponent(), e.getX(  ), e.getY(  ));
        	}
      }
    };
   
   label1.addMouseListener(mouseListener);  
    
	}


////////END OF MENU CLASS

//LIST OF HANDLER CLASS
	//////////////////  ///////////////////
class popupHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e) 
	{
    String color = e.getActionCommand( );
    if (color.equals("Undo"))
      undo();
    else if (color.equals("Copy"))
      copy();
     else if (color.equals("Cut"))
      cut();
    else if (color.equals("Paste"))
      paste();
    else if (color.equals("Delete"))
    	delete();
    else if (color.equals("Select All"))
    	selectAll();
   }
}
 	//////////////////  ///////////////////  
private JMenuItem makeMenuItem(String label) 
  	{
  	popupHandler handlerpopup=new popupHandler();
    JMenuItem item = new JMenuItem(label);
    item.addActionListener( handlerpopup );
    return item;
    }	///
	

///////	//////////////////  ///////////////////
private class UIhandler implements ActionListener
{
	menu n;
	public void actionPerformed(ActionEvent e )
	{
	for(int i=0;i<UIRadio.length;i++)
	   {
	   if(UIRadio[i].isSelected())
	       {
	       updateUI(i);
	       }
	   }
	}
}

	//////////////////  ///////////////////
public void updateUI(int i)
{
	try
	  {
	// UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
     UIManager.setLookAndFeel(looks[i].getClassName());
     SwingUtilities.updateComponentTreeUI(this);
   
     }
	catch(Exception e11)
	 {
	 e11.printStackTrace();
	 }
}


/////	//////////////////  ///////////////////
private class FileCloseHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	if( label1.getText().equals("") || textChange==false)
	    {
	    nameOfFileString="";
	    textChange=false;
	    label1.setText("");
	    setTitle("Untitled Document");
	    }
	else
	    {
	    int k= JOptionPane.showConfirmDialog(menu.this,"Do You Want To Save Changes",
          "File New",JOptionPane.YES_NO_CANCEL_OPTION);
        if(k==0)
        	 SaveFile(0);
        else if(k==1)
        	 {
	    	nameOfFileString="";
	   	 	textChange=false;
	   	 	label1.setText("");
	   	 	 setTitle("Untitled Document");
	    	}
	    else if(k==2)
	    	return; 
	    }
	
	}
}
////	//////////////////  ///////////////////
private class DocEditHandler implements UndoableEditListener
{
	public void undoableEditHappened(UndoableEditEvent e)
	{
	u.addEdit(e.getEdit());
	}
}
///////	//////////////////  ///////////////////

private class RedoHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
		 if( u.canRedo())
        {
            try
            {
                u.redo();
            }
            catch(Exception e1)
            {
             e1.printStackTrace();
            }
        }
}
}	
/////////		//////////////////  ///////////////////
private class UndoHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
		undo();
		   
	}
}	
public void undo()
{
	if(u.canUndo())
			try
			   {
			   u.undo();
			   }
			catch(Exception e1)
			   {
			    e1.printStackTrace(); 
			   }  
}
/////	//////////////////  ///////////////////
private class StringtoUpper implements ActionListener
{
public void actionPerformed(ActionEvent e)
  {
  try
    {
    int start=label1.getSelectionStart();
 	int end=label1.getSelectionEnd();
  	String temp1=label1.getText().substring(0,start);
  	String temp2=label1.getText().substring(end);
  	String convert=label1.getSelectedText().toUpperCase();
  	label1.setText(temp1+convert+temp2);
    }
  catch(Exception e1)
    {
     e1.printStackTrace();
    }
  }	
}
////	////////////////	//////////////////  ///////////////////

private class StringtoLower implements ActionListener
{
public void actionPerformed(ActionEvent e)
  {
  try 
  	{
	  int start=label1.getSelectionStart();
  	int end=label1.getSelectionEnd();
  	String temp1=label1.getText().substring(0,start);
  	String temp2=label1.getText().substring(end);
  	String convert=label1.getSelectedText().toLowerCase();
  	label1.setText(temp1+convert+temp2);
  	}
  catch(Exception e1)
    {
     e1.printStackTrace();
    }
  }	
}
////	//////////////////  ///////////////////

private class EditTimeHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	Calendar c=Calendar.getInstance();
	SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy  HH:mm ");
	int start=label1.getSelectionStart();
	int end=label1.getSelectionEnd();
	String now=sdf.format(c.getTime());
	
	String temp1=label1.getText().substring(0,start);
	String temp2=label1.getText().substring(end);
	label1.setText(temp1+" "+now+" "+temp2);
	label1.select(start+1,start+1+now.length());
	}
}

///	//////////////////  ///////////////////

private class FilePrintHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	PrinterJob printer=PrinterJob.getPrinterJob();
	HashPrintRequestAttributeSet att=new HashPrintRequestAttributeSet();
	if(printer.printDialog(att))
	{
	try
	    {
	    printer.print(att);
	    }
	catch(Exception e)
	   {
	    JOptionPane.showMessageDialog(null,"Failed to print the file: "+e,"Error",JOptionPane.ERROR_MESSAGE);
        e.printStackTrace();
	   }
	}
	}
	
}

///		//////////////////  ///////////////////
private class WrapLineHandler  implements ActionListener
{
   public void actionPerformed(ActionEvent event)	
   {
   if(wrapfont.isSelected())
      {
      label1.setLineWrap(true);
   	  label1.setWrapStyleWord(true);
      }
   else
     {
      label1.setLineWrap(false);
   	  label1.setWrapStyleWord(false);
     }
   }
}
////	//////////////////  ///////////////////
private class 	 FileNewHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	if(textChange==true && (!(label1.getText().equals("")) ))
	  {
	 int k= JOptionPane.showConfirmDialog(menu.this,"Do You Want To Save Changes",
          "File New",JOptionPane.YES_NO_CANCEL_OPTION);
     if(k==JOptionPane.YES_OPTION)
         {
         SaveFile(0);
         }  
	  
	 else if(k==JOptionPane.CANCEL_OPTION)
	   {
	   return;
	   }
	 }
	label1.setText("");
	textChange=false;	
	nameOfFileString="";
	setTitle("Untitled Document");
	}
}
/////	//////////////////  ///////////////////
private class SaveAsFileHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	SaveFile(1);
	}
}
/////	//////////////////  ///////////////////
private class SaveFileHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	SaveFile(0);
	}
}

////	//////////////////  ///////////////////
public void SaveFile(int saveOption)
{
	//0=sav
	//1=save as
if( nameOfFileString.equals("") || (saveOption==1))
   {
   JFileChooser saveChooser=new JFileChooser(); 
   saveChooser.setSelectedFile(new File("Untitled.txt"));
   saveChooser.setDialogTitle("Select File name to be Saved"); 
   int k=saveChooser.showSaveDialog(menu.this);
   if(k==saveChooser.APPROVE_OPTION)
     {
     nameOfFile=saveChooser.getSelectedFile();
     
     if(nameOfFile.exists())
     	{
     	int response = JOptionPane.showConfirmDialog( this,
     	                  "The file \"" + nameOfFile.getName()
                  + "\" already exists.\nDo you want to replace it?", 
                  "Confirm Save",
                  JOptionPane.YES_NO_OPTION, 
                  JOptionPane.WARNING_MESSAGE );
            if (response == JOptionPane.NO_OPTION)
               return;  
        }
     nameOfFileString=nameOfFile.toString();	
     }
    
   else
     {
     return;
     }
   }
   
try
	{
	FileWriter fw = new FileWriter(nameOfFileString);
	fw.write(label1.getText());
	fw.flush();
	fw.close();
	textChange=false;
	setTitle(nameOfFile.getName());
	}
catch(Exception ex)
	{
	ex.printStackTrace();
	}
 
}
///

////		//////////////////  ///////////////////


private class BackgruondButtonHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
		color1=JColorChooser.showDialog(menu.this,"Choose a color",color1);
//		color1=JColorChooser.showDialog(null,"Choose a color",color1);
		if(color1!=null)
			CurrentColor1=color1;
		label1.setBackground(CurrentColor1);
	//	label1.setForeground(colorName[i]);
	}
}


	//////////////////  ///////////////////
	
private class ForeButtonHandlerButtonHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
		color2=JColorChooser.showDialog(menu.this,"Choose a color",color1);
		if(color2!=null)
			CurrentColor2=color2;
		label1.setForeground(CurrentColor2);
	}
}
///	//////////////////  ///////////////////

private class keyBoardHandler implements KeyListener
{
	public void keyPressed(KeyEvent e)
	{
     //System.out.println("KP");
	}
public void keyReleased(KeyEvent e)
	{
	  
	}
public void keyTyped(KeyEvent e)
    {
    textChange = true;
    
     caretPosition = label1.getCaretPosition()+1;  
	String strColumnCount = Integer.toString(caretPosition);
       
     lineCount = label1.getLineCount();
    
//convert int to string   
	String strLineCount = Integer.toString(lineCount); 
    
    infoArea2.setText("                                  "+
    	"                                        "+
    	"Char  length : "+(strColumnCount)+"         Line: "+strLineCount);
    
    }
}

///	//////	//////////////////  ///////////////////


private class EditMenuHandler implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
	if(event.getSource()==EditCopy)
	    {
	    copy();
	    }
	else if(event.getSource()==EditCut)
	    {
	    cut();
	    }
	else if(event.getSource()==EditSelectAll)
	    {
	    selectAll();
	    }
	else if(event.getSource()==EditDelete)
	    {
	    delete();
	    }
		else if(event.getSource()==EditPaste)
	    {
	    paste();
	    }
	}
}


public void copy()
{
	label1.copy();
}

public void cut()
{
	label1.cut();
}

public void delete()
{
		int start=label1.getSelectionStart();
	    int end=label1.getSelectionEnd();
	    String temp1=label1.getText().substring(0,start);
	    String temp2=label1.getText().substring(end);
	    label1.setText(temp1+temp2);
}

public void paste()
{
label1.paste();
}
public void selectAll()
{
label1.selectAll();
}

/////////	//////////////////  ///////////////////


public class aboutHandler implements ActionListener
 {
 public void actionPerformed(ActionEvent e)
   {
   JFrame f=new JFrame("About");
   String about="Rana Hamid****CSE-RU..";
   ImageIcon picIcon=new ImageIcon("++.jpg");
   JLabel label2=new JLabel("",picIcon,SwingConstants.LEFT);
   label2.setText(about);
   Container p=f.getContentPane();
   p.setLayout(new FlowLayout());
   p.add(label2);
  
   int w=320,h=240;
   f.setSize(320,240);
   Point center = GraphicsEnvironment.getLocalGraphicsEnvironment().getCenterPoint();
   f.setLocation(center.x-w/2, center.y-h/2+25);
   f.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
   f.setVisible(true);
 
   }
 }
 
////// 		//////////////////  /////////////////// 


public class exitHandler implements ActionListener
  {
  public void actionPerformed (ActionEvent e)
     {
     if(textChange==true)
	  {
	 int k= JOptionPane.showConfirmDialog(menu.this,"Do You Want To Save Changes",
          "File New",JOptionPane.YES_NO_CANCEL_OPTION);
     if(k==JOptionPane.YES_OPTION)
         {
         SaveFile(0);
         }  
	  
	 else if(k==JOptionPane.CANCEL_OPTION)
	   {
	   return;
	   }
	 }
    dispose();
     }
  } 
  		
////	//////////////////  ///////////////////

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
			   //

			   
			   
	if(textChange==true)
	  {
	 int k= JOptionPane.showConfirmDialog(menu.this,"Do You Want To Save Changes",
          "File New",JOptionPane.YES_NO_CANCEL_OPTION);
     if(k==JOptionPane.YES_OPTION)
         {
         SaveFile(0);
         }  
	  
	 else if(k==JOptionPane.CANCEL_OPTION)
	   {
	   return;
	   }
	  }


    
//	nameOfFileString=chooser.getSelectedFile().getAbsolutePath();
	nameOfFileString=f.toString();
	  	 try
	  	   	{
	  	 	label1.setText("");
	     	FileReader fr=new FileReader(nameOfFileString);
	     	BufferedReader br=new BufferedReader(fr);
	     	String msg;
	    	 msg=br.readLine();
	    	 while(msg!=null)
	    		 {
	     		label1.append(msg);
	     		msg=br.readLine();
	     		}
	  	 	br.close();
	  	 	fr.close();
	  	 	textChange=false;
	  	   	}
	  	 catch(Exception ex)
	  	   	{
	  	   	JOptionPane.showMessageDialog(null,"Error in Reading","Error!",JOptionPane.ERROR_MESSAGE);
	  	    ex.printStackTrace();
	  	   	}
	  }
	
event.dropComplete(true);	
	}
			   

		    
    catch(Exception e)
		    {
			event.dropComplete(false);	
			e.printStackTrace();	
	     	}
		}
	}

	
 	public void dragEnter( DropTargetDragEvent event )
 	{
 /*	if(event.isDataFlavorSupported(DataFlavor.javaFileListFlavor))
 	   {
 	   event.acceptDrag(DnDConstants.ACTION_COPY);
 	   }
 	 else
 	 	event.rejectDrag();*/
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
///////////	//////////////////  ///////////////////

public class fontRadioMenuitemHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{

	for(int i=0;i<fontRadioMenu.length;i++)
	   {
	   if(e.getSource()==fontRadioMenu[i])
	      {
	      
	      label1.setFont(new Font(fontRadioMenu[i].getText(),style, sizeOfFont));
	      currentFont =fontRadioMenu[i].toString();
	      break;
	      }
	   }
	 repaint();  
	}
} 
/////	//////////////////  ///////////////////

private class OPenHandler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	
	if(textChange==true)
	  {
	 int k= JOptionPane.showConfirmDialog(menu.this,"Do You Want To Save Changes",
          "File New",JOptionPane.YES_NO_CANCEL_OPTION);
     if(k==JOptionPane.YES_OPTION)
         {
         SaveFile(0);
         }  
	  
	 else if(k==JOptionPane.CANCEL_OPTION)
	   {
	   return;
	   }
	 }
	FileFilter filter = new FileNameExtensionFilter("Text File", "txt", "doc");
	FileFilter filter1 = new FileNameExtensionFilter("Source code", "cpp", "m","java","pro");
	
	JFileChooser chooser=new JFileChooser();
	chooser.addChoosableFileFilter(filter1);
	chooser.addChoosableFileFilter(filter);
	
	chooser.setFileSelectionMode(chooser.FILES_ONLY);
	
	int k=chooser.showOpenDialog(menu.this);
	

			
	if(k!=chooser.CANCEL_OPTION)
	{
    nameOfFile=chooser.getSelectedFile();
	nameOfFileString=chooser.getSelectedFile().getAbsolutePath();
	
	if(nameOfFile.exists())
	  {
	  	 try
	  	   	{
	  	 	label1.setText("");
	     	FileReader fr=new FileReader(nameOfFileString);
	     	BufferedReader br=new BufferedReader(fr);
	     	String msg;
	    	 msg=br.readLine();
	    	 while(msg!=null)
	    		 {
	     		label1.append(msg);
	     		msg=br.readLine();
	     		}
	  	 	br.close();
	  	 	fr.close();
	  	 	textChange=false;
	  	 	setTitle(nameOfFile.getName());
	  	   	}
	  	 catch(Exception ex)
	  	   	{
	  	   	JOptionPane.showMessageDialog(null,"Error in Reading","Error!",JOptionPane.ERROR_MESSAGE);
	  	   	ex.printStackTrace();
	  	   	}
	  }
	}
	}
}

//	//////////////////  ///////////////////

private class FontSizeHandler implements ActionListener
{
	public void actionPerformed(ActionEvent  event)
	{
	
	try
	  {
	  String size=JOptionPane.showInputDialog("Enter Font size");
	  sizeOfFont=Integer.parseInt(size);
	  label1.setFont(new Font(currentFont,style,sizeOfFont));
	  }
	catch(Exception e)
	  {
	  e.printStackTrace();
	  }
	  	
	}
}
///	//////////////////  ///////////////////

private class setStyleHandler implements ItemListener
{
	public void itemStateChanged(ItemEvent e)
	{
	style=0;
	if(fontStyle[0].isSelected())
		style+=Font.BOLD;
	if(fontStyle[1].isSelected())
		style+=Font.ITALIC;	
	label1.setFont(new Font(label1.getFont().getName(),style,sizeOfFont));
	repaint();
	}
}


}
//////// 	////////////////////////////////////////////
///class Font Chooser
//////////////////  ///////////////////


class font_chooser implements ActionListener, ListSelectionListener
{
    static JFrame window = new JFrame("Font Chooser");
    menu  samp;

    JLabel flist_label, fsize_label, fstyle_label, fprev_label, preview;
    JList flist, fsize, fstyle;
    ScrollPane flist_sc, fstyle_sc, fsize_sc;
    JButton ok, cancel;

    GraphicsEnvironment ge; // graphics env
    String font_names[]; // font names array
    Font sample;

    String font_name;
    int font_size, font_style;

    public font_chooser(menu ref)
    {
        samp  = ref;
        window.setLayout(null);

        // creating font name list
        ge = GraphicsEnvironment.getLocalGraphicsEnvironment();
        font_names = ge.getAvailableFontFamilyNames();
        flist = new JList(font_names);
        flist.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        flist_label  = new JLabel("Font: ");
        window.add(flist_label);
        flist_label.setBounds(10, 10, 120, 20);
        flist_sc = new ScrollPane();
        flist_sc.add(flist);
        flist_sc.setBounds(10, 30, 120, 200);
        window.add(flist_sc);
        flist.addListSelectionListener(this);

        // font style box
        String styles[] = {"Regular", "Bold", "Italic", "Bold Italic"};
        fstyle = new JList(styles);
        fstyle.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        fstyle_label = new JLabel("Style: ");
        window.add(fstyle_label);
        fstyle_label.setBounds(140, 10, 80, 20);
        fstyle_sc = new ScrollPane();
        fstyle_sc.add(fstyle);
        fstyle_sc.setBounds(140, 30, 80, 70);
        window.add(fstyle_sc);
        fstyle.addListSelectionListener(this);

        // font size box
        //Vector a = new Vector(40, 1);
        Vector a = new Vector();
        for (int i = 8; i <= 100; i += 2)
            a.addElement(String.valueOf(i));
        fsize = new JList(a);
        fsize.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        fsize_label = new JLabel("Size: ");
        fsize_label.setBounds(140, 110, 80, 20);
        window.add(fsize_label);
        fsize_sc = new ScrollPane();
        fsize_sc.add(fsize);
        fsize_sc.setBounds(140, 130, 80, 100);
        window.add(fsize_sc);
        fsize.addListSelectionListener(this);

        // ok and cancel button
        ok = new JButton("OK");
        ok.setBounds(230, 30, 75, 20);
        ok.addActionListener(this);
        window.add(ok);

        cancel = new JButton("Cancel");
        cancel.setBounds(230, 50, 75, 20);
        cancel.addActionListener(this);
        window.add(cancel);

        fprev_label  = new JLabel("Preview: ");
        fprev_label.setBounds(10, 230, 300, 20);
        window.add(fprev_label);

        // preview
        preview = new JLabel("CSE-RU-2013");
        preview.setBounds(10, 250, 290, 85);
        preview.setHorizontalAlignment(SwingConstants.CENTER);
        preview.setOpaque(true);
        preview.setBackground(Color.white);
        preview.setBorder(new LineBorder(Color.black, 1));
        window.add(preview);

        int w = 320;
        int h = 380;
        window.setSize(w,h);
        // set window position
        Point center = GraphicsEnvironment.getLocalGraphicsEnvironment().getCenterPoint();
        window.setLocation(center.x-w/2, center.y-h/2+25);
        window.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        window.setVisible(false);
    }

    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==ok)
            ok();
        else if(e.getSource()==cancel)
            cancel();
    }

    public void valueChanged(ListSelectionEvent l)
    {
        if(l.getSource()==flist)
        {
//            preview.setText( flist.getSelectedValue().toString() );
            changeFontSample();
        }
        else if(l.getSource()==fsize)
        {
            changeFontSample();
        }
        else if(l.getSource()==fstyle)
        {
            changeFontSample();
        }
    }

    private void changeFontSample()
    {

        try
        {
        font_name = flist.getSelectedValue().toString();
        }
        catch(NullPointerException npe)
        {
            font_name = "Verdana";
        }
        try
        {
            font_style = getStyle();
        }
        catch(NullPointerException npe)
        {
            font_style = Font.PLAIN;
        }
        try
        {
            font_size = Integer.parseInt(fsize.getSelectedValue().toString());
        }
        catch(NullPointerException npe)
        {
            font_size = 12;
        }
        sample = new Font(font_name, font_style, font_size);
        preview.setFont(sample);
    }

    private int getStyle()
    {
        if( fstyle.getSelectedValue().toString().equals("Bold") )
            return Font.BOLD;
        if(fstyle.getSelectedValue().toString().equals("Italic") )
            return Font.ITALIC;
        if(fstyle.getSelectedValue().toString().equals("Bold Italic"))
            return Font.BOLD+Font.ITALIC;

        return Font.PLAIN;
    }

    private void ok()
    {
        try
        {
        samp.label1.setFont(sample);
        }
        catch(NullPointerException npe)
        {
        
        }
        this.window.setVisible(false);
    }

    private void cancel()
    {
        this.window.setVisible(false);
    }

}

//////////////////////////////////////////
///////////////////////////////////////////
 class find extends JFrame implements ActionListener
{
    int startIndex=0;
    Label l1, l2;
    TextField tf, tr;
    JButton find_btn, find_next, replace, replace_all, cancel;

    menu samp;

    public find(menu mynote)
    {
        super("Find / Replace");
        samp = mynote;

        l1 = new Label("Find What: ");
        l2 = new Label("Replace With: ");
        tf = new TextField(30);
        tr = new TextField(30);
        find_btn = new JButton("Find");
        find_next = new JButton("Find Next");
        replace = new JButton("Replace");
        replace_all = new JButton("Replace All");
        cancel = new JButton("Cancel");

        setLayout(null);
        int label_w = 80;
        int label_h = 20;
        int tf_w    = 120;

        l1.setBounds(10,10, label_w, label_h);
        add(l1);
        tf.setBounds(10+label_w, 10, tf_w, 20);
        add(tf);
        l2.setBounds(10, 10+label_h+10, label_w, label_h);
        add(l2);
        tr.setBounds(10+label_w, 10+label_h+10, tf_w, 20);
        add(tr);

        find_btn.setBounds(220, 10, 100, 20);
        add(find_btn);
        find_btn.addActionListener(this);
        find_next.setBounds(220, 30, 100, 20);
        add(find_next);
        find_next.addActionListener(this);
        replace.setBounds(220, 50, 100, 20);
        add(replace);
        replace.addActionListener(this);
        replace_all.setBounds(220, 70, 100, 20);
        add(replace_all);
        replace_all.addActionListener(this);
        cancel.setBounds(220, 90, 100, 20);
        add(cancel);
        cancel.addActionListener(this);

        int w = 340;
        int h = 150;

        setSize(w,h);
        // set window position
        Point center = GraphicsEnvironment.getLocalGraphicsEnvironment().getCenterPoint();
        setLocation(center.x-w/2, center.y-h/2);
        setVisible(false);
    }

    public void actionPerformed(ActionEvent e)
    {
         if(e.getSource()==find_btn)
         {
            find();
         }
         else if(e.getSource() == find_next)
         {
            find_next();
         }
         else if(e.getSource() == replace)
         {
             replace();
         }
         else if(e.getSource() == replace_all)
         {
            replace_all();
         }
         else if(e.getSource() == cancel)
         {
            this.setVisible(false);
         }
    }

    public void find()
    {
        int select_start = samp.label1.getText().indexOf(tf.getText());
        if(select_start == -1)
        {
            startIndex = 0;
            JOptionPane.showMessageDialog(null, "Could not find "+tf.getText()+"!");
            return;
        }
        if(select_start == samp.label1.getText().lastIndexOf(tf.getText()))
        {
            startIndex = 0;
        }
        int select_end = select_start+tf.getText().length();
        samp.label1.select(select_start, select_end);
    }

    public void find_next()
    {

        String selection = samp.label1.getSelectedText();
        try
        {
            selection.equals("");
        }
        catch(NullPointerException e)
        {
            selection = tf.getText();
            try
            {
                selection.equals("");
            }
            catch(NullPointerException e2)
            {
                selection = JOptionPane.showInputDialog("Find:");
                tf.setText(selection);
            }
        }
        try
        {
            int select_start = samp.label1.getText().indexOf(selection, startIndex);
            int select_end = select_start+selection.length();
            samp.label1.select(select_start, select_end);
            startIndex = select_end+1;

            if(select_start == samp.label1.getText().lastIndexOf(selection))
            {
                startIndex = 0;
            }
        }
        catch(NullPointerException e)
        {}
    }

    public void replace()
    {
        try
        {
        find();
        samp.label1.replaceSelection(tr.getText());
        }
        catch(NullPointerException e)
        {
            System.out.print("Null Pointer Exception: "+e);
        }
    }

    public void replace_all()
    {

        samp.label1.setText(samp.label1.getText().replaceAll(tf.getText(), tr.getText()));
    }
}

///////////////////////////////////////////////////////////
//////////////////  ///////////////////	
/////////////Main class	//////////////////  ///////////////////
//////////////////  ///////////////////
public class notepad
{
	public static void main (String[] args) 
	{
	menu g=new menu();
	int w=640,h=480;
    Point center = GraphicsEnvironment.getLocalGraphicsEnvironment().getCenterPoint();
   	g.setLocation(center.x-w/2, center.y-h/2+25);
	g.setSize(640,480);
	g.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	g.setVisible(true);
	
	}
}
