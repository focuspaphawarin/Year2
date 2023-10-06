/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package mouseevent;

import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseMotionListener;
import javax.swing.*;

/**
 *
 * @author paphawarinsuchantabut
 */
public class MouseEvent extends JFrame 
{
//    DrawStringArea drawStringObj = new DrawStringArea();
      DrawKeyArea drawKeyArea = new DrawKeyArea();

    MouseEvent()
    {
        add(drawKeyArea);
        drawKeyArea.setFocusable(true);
    }
    class DrawKeyArea extends JPanel
    {
        char ch = 'A';
        int x = 10;
        int y = 10 ;
        DrawKeyArea()
        {
            addKeyListener(new KeyAdapter()
            {
                @Override
                public void keyPressed(KeyEvent e)
                {
                    switch(e.getKeyCode())
                    {
                        case KeyEvent.VK_UP:
                            y-=10;
                            break;
                        case KeyEvent.VK_DOWN:
                            y+=10;
                            break;
                        case KeyEvent.VK_LEFT:
                            x-=10;
                            break;
                        case KeyEvent.VK_RIGHT:
                            x+=10;
                            break;
                        default:
                            ch = e.getKeyChar();
                    }
                    repaint();
                }
            }

              
                
//            addKeyListener(new KeyListener() //override เยอะเกิน ถ้าอยากใช้แค่ตัวเดียวควรใช้ keyAdapter
//                    {
//                @Override
//                public void keyTyped(KeyEvent e) 
//                {
//                }
//
//                @Override
//                public void keyPressed(KeyEvent e) 
//                {
//                }
//
//                @Override
//                public void keyReleased(KeyEvent e) 
//                {
//                }
//                        
//                    });
    }
        @Override
        public void paintComponent(Graphics g)
        {
            super.paintComponent(g); //เคลียร์หน้าจอ
            g.setColor(Color.red); //กำหนดสีปากกา
            g.drawString(String.valueOf(ch), x, y);
        }
    }
    class DrawStringArea extends JPanel
    {
        String str = "HELLO JAVA";
        int x = 10;
        int y = 10 ;
        DrawStringArea()
        {
            addMouseMotionListener(new MouseMotionListener()
            {
                public void mouseDragged(MouseEvent e) 
                {
                    x = e.getX();
                    y = e.getY();
                    repaint();
                        
                }
                public void mouseMoved(MouseEvent e)
                {
//                    x = e.getX();
//                    y = e.getY();
//                    repaint();
                }

                @Override
                public void mouseDragged(java.awt.event.MouseEvent e) {
                    throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
                }

                @Override
                public void mouseMoved(java.awt.event.MouseEvent e) {
                    throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
                }
            });
                    
                        
                   
        }
        @Override 
        public void paintComponent(Graphics g)
        {
            super.paintComponent(g); //เคลียร์หน้าจอ
            g.setColor(Color.red); //กำหนดสีปากกา
            g.drawString(str, x, y);
        }
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        MouseEvent frame = new MouseEvent();
        frame.setTitle("Event Example");
        frame.setSize(500, 400);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    
}