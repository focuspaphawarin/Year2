/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab8_3;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Polygon;
import javax.swing.JFrame;
import javax.swing.JPanel;
/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB8_3 extends JFrame {

    /**
     * @param args the command line arguments
     */
    public LAB8_3()
    {
        setLayout(new GridLayout(2,4,5,5));
        add (new Ex1());
        add (new Ex2());
        add (new Ex3());
        add (new Ex4());
        add (new Ex5());
        add (new Ex6());
        add (new Ex7());
    }

    
    public static void main(String[] args) 
    {
        LAB8_3 frame = new LAB8_3();
        frame.setSize(400, 400);
        frame.setTitle("Exercise 10.10");
        frame.setVisible(true);
    }
    
}
abstract class AbstractDrawFunction extends JPanel
{
    /**Polygon to hold the points*/
    private Polygon p = new Polygon();
    /**Default constructor*/
    protected AbstractDrawFunction ()
    {
    drawFunction();
    setBackground(Color.white);
}
/**Draw the function*/
public abstract double f(double x);
/**Obtain points for x coordinates 100, 101, ..., 300*/
public void drawFunction()
{
    for (int x = -100; x <= 100; x++)
    {
    p.addPoint(x+200, 200-(int)f(x));
    }
}
/**Paint the function diagram*/
public void paintComponent(Graphics g)
{
    super.paintComponent(g);
    // Draw x axis
    g.drawLine(10, 200, 390, 200);
    // Draw y axis
    g.drawLine(200,30, 200, 390);
    // Draw arrows on x axis
    g.drawLine(390, 200, 370, 190);
    g.drawLine(390, 200, 370, 210);
    // Draw arrows on y axis
    g.drawLine(200, 30, 190, 50);
    g.drawLine(200, 30, 210, 50);
    // Draw x, y
    g.drawString("X", 370, 170);
    g.drawString("Y", 220, 40);
    // Draw a polygon line by connecting the points in the polygon
    g.drawPolyline(p.xpoints, p.ypoints, p.npoints);
    }
}
class Ex1 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return x*x;
    }
    protected Ex1 ()
    {
        drawFunction();
        setBackground(Color.GRAY);
    }
    
}
class Ex2 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (Math.sin(x))*10;
    }
    protected Ex2 ()
    {
        drawFunction();
        setBackground(Color.PINK);
    }
    
}
class Ex3 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (Math.cos(x))*10;
    }
    protected Ex3 ()
    {
        drawFunction();
        setBackground(Color.GREEN);
    }
    
}
class Ex4 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (Math.tan(x))*2;
    }
    protected Ex4 ()
    {
        drawFunction();
        setBackground(Color.RED);
    }
    
}
class Ex5 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (Math.cos(x))+(5*(Math.sin(x)));
    }
    protected Ex5 ()
    {
        drawFunction();
        setBackground(Color.WHITE);
    }
    
}
class Ex6 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (5*(Math.cos(x)))+(Math.sin(x));
    }
    protected Ex6 ()
    {
        drawFunction();
        setBackground(Color.BLUE);
    }
    
}
class Ex7 extends AbstractDrawFunction
{

    @Override
    public double f(double x) 
    {
        return (Math.log(x))+(Math.pow(x,2));
    }
    protected Ex7 ()
    {
        drawFunction();
        setBackground(Color.YELLOW);
    }
    
}