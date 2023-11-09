/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package car4;
import java.awt.*;
import java.awt.event.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;
/**
 *
 * @author paphawarinsuchantabut
 */
public class Car4 extends JFrame {

    // ... (existing code)

    RaceCar rc1 = new RaceCar(0, 2); // Car 1 starts at x=0 with speed=2 (right)
    RaceCar rc2 = new RaceCar(400, -2); // Car 2 starts at x=400 with speed=-2 (left)
    RaceCar rc3 = new RaceCar(200, 3); // Car 3 starts at x=200 with speed=3 (right)

    // ... (existing code)

    class RaceCar extends JPanel {

        // ... (existing code)

        int xBase;
        int speed;
        int direction; // -1 for left, 1 for right

        RaceCar(int initialX, int carSpeed) {
            xBase = initialX;
            speed = carSpeed;
            direction = (speed > 0) ? 1 : -1;
            // ... (rest of the existing code)
        }

        // ... (existing code)
    }
}

//public class Car4 extends JFrame 
//{
//
//    JLabel c1 = new JLabel("Car 1:");
//    JLabel c2 = new JLabel("Car 2:");
//    JLabel c3 = new JLabel("Car 3:");
//    JLabel c4 = new JLabel("Car 4:");
//    JTextField ca1 = new JTextField(10);
//    JTextField ca2 = new JTextField(10);
//    JTextField ca3 = new JTextField(10);
//    JTextField ca4 = new JTextField(10);
//    RaceCar rc1 = new RaceCar();
//    RaceCar rc2 = new RaceCar();
//    RaceCar rc3 = new RaceCar();
//    RaceCar rc4 = new RaceCar();
//    listener list1 = new listener();
//    listener list2 = new listener();
//    listener list3 = new listener();
//    listener list4 = new listener();
//
//    Car4() 
//    {
//        ca1.addActionListener(list1);
//        ca2.addActionListener(list2);
//        ca3.addActionListener(list3);
//        ca4.addActionListener(list4);
//        JPanel p1 = new JPanel();
//        p1.add(c1);
//        p1.add(ca1);
//        p1.add(c2);
//        p1.add(ca2);
//        p1.add(c3);
//        p1.add(ca3);
//        p1.add(c4);
//        p1.add(ca4);
//        JPanel p2 = new JPanel(new GridLayout(4, 1));
//        p2.add(rc1);
//        p2.add(rc2);
//        p2.add(rc3);
//        p2.add(rc4);
//        add(p1, BorderLayout.NORTH);
//        add(p2, BorderLayout.CENTER);
//
//    }
//
//    class listener implements ActionListener 
//    {
//
//        @Override
//        public void actionPerformed(ActionEvent e) 
//        {
//            if (e.getSource() == ca1) 
//            {
//                int v1 = Integer.parseInt(ca1.getText());
//                rc1.speed = v1;
//            }
//            else if (e.getSource() == ca2)
//            {
//                int v2 = Integer.parseInt(ca2.getText());
//                rc2.speed = v2;
//            }
//            else if (e.getSource() == ca3)
//            {
//                int v3 = Integer.parseInt(ca3.getText());
//                rc3.speed = v3;
//            }
//            else if (e.getSource() == ca4)
//            {
//                int v4 = Integer.parseInt(ca4.getText());
//                rc4.speed = v4;
//            }
//        }
//
//    }
//
//    public static void main(String[] args) 
//    {
//        Car4 frame = new Car4();
//        frame.setTitle("Exercise");
//        frame.setLocationRelativeTo(null); // Center the frame
//        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        frame.setSize(800, 500);
//        frame.setVisible(true);
//    }
//
//    class RaceCar extends JPanel 
//    {
//        class RaceTimer implements Runnable 
//        {
//
//            @Override
//            public void run() 
//            {
//                while (true) 
//                {
//                    try 
//                    {
//                        Thread.sleep(10);
//                    } catch (InterruptedException ex) 
//                    {
//                        Logger.getLogger(Car4.class.getName()).log(Level.SEVERE, null, ex);
//                    }
//                    repaint();
//                }
//            }
//        }
//        int xBase=0;
//        int speed=0;
//
//        RaceCar() 
//        {
//            Thread R1;
//            R1 = new Thread(new RaceTimer());
//            R1.start();
//            this.setFocusable(true);
//            this.addKeyListener(new KeyAdapter() 
//            {
//                public void keyPressed(KeyEvent e) 
//                {
//                    if (e.isControlDown() && e.getKeyCode() == 61) 
//                    {
//                        speed++;
//                    } else if (e.isControlDown() && e.getKeyCode() == 45) 
//                    {
//                        speed--;
//                    }
//                }
//            });
//        }
//
//        public void paintComponent(Graphics g) 
//        {
//            super.paintComponent(g);
//
//            int yBase = getHeight();
//            if (xBase > getWidth()) 
//            {
//                xBase = -20;
//            } else 
//            {
//                xBase += speed;
//            }
//
//            g.setColor(Color.BLACK);
//            g.fillOval(xBase + 10, yBase - 10, 10, 10);
//            g.fillOval(xBase + 30, yBase - 10, 10, 10);
//            g.setColor(Color.GRAY);
//            g.fillRect(xBase, yBase - 20, 50, 10);
//
//            g.setColor(Color.PINK);
//            Polygon polygon = new Polygon();
//            polygon.addPoint(xBase + 10, yBase - 20);
//            polygon.addPoint(xBase + 20, yBase - 30);
//            polygon.addPoint(xBase + 30, yBase - 30);
//            polygon.addPoint(xBase + 40, yBase - 20);
//            g.fillPolygon(polygon);
//        }
//    }

//}
