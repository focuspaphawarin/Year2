package javaapplication2;
import java.util.Scanner;
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB2 {
    public static void main(String[] args)
    {
        System.out.print("Enter the monthly saving amount:");
        Scanner input = new Scanner(System.in);
        double income = input.nextDouble();
        double total = income * (1.0 + 0.00417);
        for(int i=0;i<5;i++)
        {
            double x = (income + total) * (1 + 0.00417);
            total = x ;
            
        }
        System.out.printf("After the sixth month, the account value is $%.2f",total);
    }
}
