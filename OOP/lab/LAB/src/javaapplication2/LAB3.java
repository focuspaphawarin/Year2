/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;
import java.util.Scanner;
import java.lang.Math;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB3 {
    public static void main(String[] args){
        System.out.print("Enter three points for a triangle:");
        double[] array = new double[10];
        Scanner input = new Scanner(System.in);
        for(int i = 0 ; i < 6 ; i++)
        {
            array[i] = input.nextDouble();
        }
        double side1 = Math.sqrt(Math.pow((array[0] - array[2]),2) + Math.pow((array[1] - array[3]),2));
        double side2 = Math.sqrt(Math.pow((array[0] - array[4]),2) + Math.pow((array[1] - array[5]),2));
        double side3 = Math.sqrt(Math.pow((array[2] - array[4]),2) + Math.pow((array[3] - array[5]),2));
        double s = (side1+side2+side3)/2;
        double area = Math.sqrt(s*(s - side1)*(s - side2)*(s - side3));
        System.out.printf("The area of the triangle is %.1f",area);
    
    }
    
}

