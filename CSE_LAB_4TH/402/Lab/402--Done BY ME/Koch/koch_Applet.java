import java.awt.*;
import java.applet.*;
import java.awt.event.*;
class KKoch extends Applet implements MouseListener
{
            int  iteration;
            int size = 20;
            public void init() 
            {
                        setBackground(Color.white);
                        addMouseListener(this) ;
                        iteration=1;
            }
            public void mouseMoved(MouseEvent e){}
            public void mouseDragged(MouseEvent e){}
            public void mouseReleased(MouseEvent e){}
            public void mouseClicked(MouseEvent e){}
            public void mouseEntered(MouseEvent e){}
            public void mouseExited(MouseEvent e){}

            void  koch(double  x1, double  y1, double  x2, double  y2,int  iteration, Graphics  g)
            {
                        if  (iteration<=1)
                        {g.drawLine ((int )x1,(int )y1,(int )x2,(int )y2);}
                        else  
						{
                                    double  x4=x1*2/3 + x2*1/3;
                                    double  y4=y1*2/3 + y2*1/3;
                                    double  x5=x1*1/3 + x2*2/3;
                                    double  y5=y1*1/3 + y2*2/3;
                                    double  x6=(int) (0.5 * (x1+x2) + Math.sqrt(3) * (y1-y2)/6);
                                    double  y6=(int) (0.5 * (y1+y2) + Math.sqrt(3) * (x2-x1)/6);
                                    koch(x1,y1,x4,y4,iteration-1,g);
                                    koch(x4,y4,x6,y6,iteration-1,g);
                                    koch(x6,y6,x5,y5,iteration-1,g);
                                    koch(x5,y5,x2,y2,iteration-1,g);
                        }
            }
            public void paint(Graphics  g)
            {
                        g.setColor(Color .black);
                        Dimension w = getSize();
                        koch(size*3,  w.height - size*7, w.width - size*3, w.height - size*7, iteration, g);
                        koch(w.width/2, size*2, size*3,  w.height - size*7, iteration, g);
                        koch(w.width - size*3, w.height - size*7, w.width/2, size*2, iteration, g);
            }

            public void mousePressed(MouseEvent e)
            {
                        iteration++;
                        repaint();
            }
}