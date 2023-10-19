/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package car;
import java.awt.*;
import java.awt.event.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;

/**
 *
 * @author paphawarinsuchantabut
 */
public class Car extends JFrame 
{

    JLabel c1 = new JLabel("Car 1:");
    JTextField ca1 = new JTextField(10);
    RaceCar rc1 = new RaceCar();
    listener list1 = new listener();

    Car() 
    {
        ca1.addActionListener(list1);
        JPanel p1 = new JPanel();
        p1.add(c1);
        p1.add(ca1);
        JPanel p2 = new JPanel(new GridLayout(4, 1));
        p2.add(rc1);
        add(p1, BorderLayout.NORTH);
        add(p2, BorderLayout.CENTER);

    }

    class listener implements ActionListener 
    {

        @Override
        public void actionPerformed(ActionEvent e) 
        {
            if (e.getSource() == ca1) {
                int v1 = Integer.parseInt(ca1.getText());
                rc1.speed = v1;
            }
        }

    }

    public static void main(String[] args) 
    {
        Car frame = new Car();
        frame.setTitle("Exercise");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 500);
        frame.setVisible(true);
    }

    class RaceCar extends JPanel 
    {
        class RaceTimer implements Runnable 
        {

            @Override
            public void run() 
            {
                while (true) 
                {
                    try 
                    {
                        Thread.sleep(10);
                    } catch (InterruptedException ex) 
                    {
                        Logger.getLogger(Car.class.getName()).log(Level.SEVERE, null, ex);
                    }
                    repaint();
                }
            }
        }
        int xBase=0;
        int speed=0;

        RaceCar() 
        {
            Thread R1;
            R1 = new Thread(new RaceTimer());
            R1.start();
            this.setFocusable(true);
            this.addKeyListener(new KeyAdapter() 
            {
                public void keyPressed(KeyEvent e) 
                {
                    if (e.isControlDown() && e.getKeyCode() == 61) 
                    {
                        speed++;
                    } else if (e.isControlDown() && e.getKeyCode() == 45) 
                    {
                        speed--;
                    }
                }
            });
        }

        public void paintComponent(Graphics g) 
        {
            super.paintComponent(g);

            int yBase = getHeight();
            if (xBase > getWidth()) 
            {
                xBase = -20;
            } else 
            {
                xBase += speed;
            }

            g.setColor(Color.BLACK);
            g.fillOval(xBase + 10, yBase - 10, 10, 10);
            g.fillOval(xBase + 30, yBase - 10, 10, 10);
            g.setColor(Color.GRAY);
            g.fillRect(xBase, yBase - 20, 50, 10);

            g.setColor(Color.PINK);
            Polygon polygon = new Polygon();
            polygon.addPoint(xBase + 10, yBase - 20);
            polygon.addPoint(xBase + 20, yBase - 30);
            polygon.addPoint(xBase + 30, yBase - 30);
            polygon.addPoint(xBase + 40, yBase - 20);
            g.fillPolygon(polygon);
        }
    }

}
