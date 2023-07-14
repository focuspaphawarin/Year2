/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;
import java.util.Scanner;
/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB1 {
    public static void main(String[] agrs)
    {
        Scanner input = new Scanner(System.in);
        double fahrenheit = input.nextDouble();
        double celsius = (5.0/9.0)*(fahrenheit-32);
        System.out.print(celsius);
    }
    
}
