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
public class LAB4 {
    public static void main(String[] args)
    {
        System.out.print("Enter balance and interest rate (e.g., 3 for 3%): ");
 
        Scanner input = new Scanner(System.in);
        double balance , rate;
        balance = input.nextDouble();
        rate = input.nextDouble();
        double interest = balance * (rate / 1200);
   
        System.out.printf("The interest is %.5f",interest);
        
    }
}
