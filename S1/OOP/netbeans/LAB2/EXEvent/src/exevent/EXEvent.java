/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exevent;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;


/**
 *
 * @author paphawarinsuchantabut
 */
public class EXEvent exten/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exevent;
        import java.awt.BorderLayout;
        import java.awt.Color;
        import java.awt.Graphics;
        import java.awt.event.ActionEvent;
        import java.awt.event.ActionListener;
        import javax.swing.*;


/**
 *
 * @author paphawarinsuchantabut
 */
public class EXEvent extends JFrame
{
    DrawCircleArea drawCircle = new DrawCircleArea();
    JButton jbtEnlarge = new JButton("Enlarge");
    JButton jbtShrink = new JButton("Shrink");
    JPanel p = new JPanel();
    EXEvent()
    {
        p.add(jbtEnlarge);
        p.add(jbtShrink);
        add(drawCircle,BorderLayout.CENTER);
        add(p,BorderLayout.SOUTH);
        jbtEnlarge.addActionListener(new Listener()); //ลงทะเบียนListener
        jbtShrink.addActionListener(new Listener());
    }


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        EXEvent frame = new EXEvent();
        frame.setTitle("Event Example");
        frame.setSize(500, 400);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    //inner class นิยม
    class Listener implements ActionListener
    {

        @Override
        public void actionPerformed(ActionEvent e)
        {
            if(e.getSource()==jbtEnlarge)
            {
                drawCircle.incRadius();
            }
            else if (e.getSource()==jbtShrink)
            {
                drawCircle.deRadius();
            }
            else{}

        }

    }

}
class DrawCircleArea extends JPanel //พื้นที่ในการวาดรูป
{
    int radius = 10; //รัศมี
    void incRadius()
    {
        radius+=10;
        repaint(); //เรียกpaintComponent
    }
    void deRadius()
    {
        radius-=10;
        repaint(); //เรียกpaintComponent
    }
    @Override
    public void paintComponent (Graphics g)
    {
        super.paintComponent(g); //เคลียร์หน้าจอ
        g.setColor(Color.red); //กำหนดสีปากกา
        g.drawOval(getWidth()/2-radius, getHeight()/2-radius, 2*radius, 2*radius);

    }
}
//external class ไม่นิยม
//class Listener implements ActionListener
//{
//    DrawCircleArea drawCircer = new DrawCircleArea();
//    @Override
//    public void actionPerformed(ActionEvent e)
//    {
//        if(e.getSource()==jbtEnlarge)
//        {
//            drawCircle.incRadius();
//        }
//        else if (e.getSource()==jbtShrink)
//        {
//            drawCircle.deRadius();
//        }
//        else{}
//
//}ds JFrame
{
    DrawCircleArea drawCircle = new DrawCircleArea();
    JButton jbtEnlarge = new JButton("Enlarge");
    JButton jbtShrink = new JButton("Shrink");
    JPanel p = new JPanel();
    EXEvent()
    {
        p.add(jbtEnlarge);
        p.add(jbtShrink);
        add(drawCircle,BorderLayout.CENTER);
        add(p,BorderLayout.SOUTH);
        jbtEnlarge.addActionListener(new Listener()); //ลงทะเบียนListener
        jbtShrink.addActionListener(new Listener());
    }
           

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        EXEvent frame = new EXEvent();
        frame.setTitle("Event Example");
        frame.setSize(500, 400);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    //inner class นิยม
    class Listener implements ActionListener
    {

        @Override
        public void actionPerformed(ActionEvent e) 
        {
            if(e.getSource()==jbtEnlarge)
            {
                drawCircle.incRadius();
            }
            else if (e.getSource()==jbtShrink)
            {
                drawCircle.deRadius();
            }
            else{}
         
        }
        
    }
    
}
class DrawCircleArea extends JPanel //พื้นที่ในการวาดรูป
{
    int radius = 10; //รัศมี
    void incRadius()
    {
        radius+=10;
        repaint(); //เรียกpaintComponent
    }
    void deRadius()
    {
        radius-=10;
        repaint(); //เรียกpaintComponent
    }
    @Override
    public void paintComponent (Graphics g)
    {
        super.paintComponent(g); //เคลียร์หน้าจอ
        g.setColor(Color.red); //กำหนดสีปากกา
        g.drawOval(getWidth()/2-radius, getHeight()/2-radius, 2*radius, 2*radius);
        
    }
}
//external class ไม่นิยม
//class Listener implements ActionListener
//{
//    DrawCircleArea drawCircer = new DrawCircleArea();
//    @Override
//    public void actionPerformed(ActionEvent e) 
//    {
//        if(e.getSource()==jbtEnlarge)
//        {
//            drawCircle.incRadius();
//        }
//        else if (e.getSource()==jbtShrink)
//        {
//            drawCircle.deRadius();
//        }
//        else{}
//         
//}