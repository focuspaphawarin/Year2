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
public class LAB7 
{
    public static void main(String[] args)
    {
        System.out.print("Please input x, n: ");
        Scanner input = new Scanner(System.in);
        double x = input.nextDouble();
        int n = input.nextInt();
        double ans=0;
        for(int i=0;i<=n;i++)
        {
            ans = Math.pow(x,i)+ans;
        }
        System.out.printf("Output is: %.0f",ans);
        
    }
}
