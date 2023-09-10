/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lab2;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB8 {
    public static void main(String[] args)
    {
        RegularPolygon obj1 = new RegularPolygon();
        RegularPolygon obj2 = new RegularPolygon(6,4);
        RegularPolygon obj3 = new RegularPolygon(10,4,5.6,7.8);
        System.out.printf("Perimeter: %.2f  Area: %.2f\n",obj1.getPerimeter(),obj1.getArea());
        System.out.printf("Perimeter: %.2f  Area: %.2f\n",obj2.getPerimeter(),obj2.getArea());
        System.out.printf("Perimeter: %.2f  Area: %.2f\n",obj3.getPerimeter(),obj3.getArea());
    }
}

