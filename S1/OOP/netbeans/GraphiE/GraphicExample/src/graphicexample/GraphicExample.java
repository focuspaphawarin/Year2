
package graphicexample;
import java.awt.Graphics;
import java.net.URL;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class GraphicExample extends JFrame  
{
    GraphicExample()
    {
        add(new DrawArea()); 
    }

    class DrawArea extends JPanel implements graphicexample.DrawArea //paper
    {
        URL imageURL = this.getClass().getResource("bg.jfif");
        Image image = new ImageIcon(imageURL).getImage();
        URL imageActorURL = this.getClass().getResource("");
        Image imageActor = new ImageIcon(imageActorURL).getImage();
//        Timer time = new Timer(1000,new Listener());
        int x = 0 ;
        int y = 600 ;
//        @Override 
//        public void painComponent(Graphics g)
//        {
//            super.paintComponent(g);
//            if(x>getWidth())
//            {
//                x=0;
//            }
//            else
//            {
//                x+=5;
//            }
//            g.drawImage(image, 0, 0, getWidth(), getHeight(), this);
//            g.drawImage(imageActor,x,y,100,100,this);
//        }
//        class Listener implements ActionListener()
//        {
//            @Override 
//            public void actionPerfo(Graphics g)
//            {
//                
//            }
//        }
    }
    public static void main(String[] args) {
        GraphicExample frame = new GraphicExample();
        frame.setTitle("Example");
        frame.setSize(1500,1500); //size
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //keep in memory
        frame.setVisible(true);        // TODO code application logic here
    }
    
}
