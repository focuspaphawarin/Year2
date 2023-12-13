/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lab2;
import java.util.Scanner;
/**
 *
 * @author paphawarinsuchantabut
 */
//public class LAB5 
//{
//    public static void main(String[] args)
//    {
//        System.out.print("Enter a b c d e f :");
//        Scanner sc = new Scanner(System.in);
//        double a = sc.nextDouble();
//        double b = sc.nextDouble();
//        double c = sc.nextDouble();
//        double d = sc.nextDouble();
//        double e = sc.nextDouble();
//        double f = sc.nextDouble();
//        LinearEquation obj = new LinearEquation(a,b,c,d,e,f);
//        if(obj.isSolvable(a,b,c,d))
//        {
//            System.out.println("X :"+obj.getX(a,b,c,d,e,f));
//            System.out.println("y :"+obj.getY(a,b,c,d,e,f));
//        }
//        else {System.out.println("The equation has no solution");}
//    }
//    
//}
public class LinearEquation
{
    private double a;
    private double b;
    private double c;
    private double d;
    private double e;
    private double f;
    public LinearEquation(double a,double b,double c,double d,double e,double f)
    {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
        this.e = e;
        this.f = f;
    }
    public double getA()
    {
        return this.a;
    }
    public double getB()
    {
        return this.b;
    }
    public double getC()
    {
        return this.c;
    }
    public double getD()
    {
        return this.d;
    }
    public double getE()
    {
        return this.e;
    }
    public double getF()
    {
        return this.f;
    }
    public boolean isSolvable(double a,double b,double c,double d)
    {
        return (a * d) - (b * c) != 0;
    }
    public double getX(double a,double b,double c,double d,double e,double f) {
        return ((e * d) - (b * f)) / ((a * d) - (b * c));
    }
    public double getY(double a,double b,double c,double d,double e,double f)
    {
        return ((a*f)-(e*c))/((a*d)-(b*c));
    }
    public static void main(String[] args)
    {
        System.out.print("Enter a b c d e f :");
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double d = sc.nextDouble();
        double e = sc.nextDouble();
        double f = sc.nextDouble();
        LinearEquation obj = new LinearEquation(a,b,c,d,e,f);
        if(obj.isSolvable(a,b,c,d))
        {
            System.out.println("X :"+obj.getX(a,b,c,d,e,f));
            System.out.println("y :"+obj.getY(a,b,c,d,e,f));
        }
        else {System.out.println("The equation has no solution");}
    }
}
