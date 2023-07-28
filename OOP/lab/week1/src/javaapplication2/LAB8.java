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
public class LAB8 {
    public static void main(String[] args)
    {
        System.out.print("Please input n, a0 and a1:");
        Scanner input = new Scanner(System.in );
        int n = input.nextInt();
        int[] a = new int[n+1];
        a[0] = input.nextInt();
        a[1] = input.nextInt();
        System.out.printf("Output is: %d %d",a[0],a[1]);
        for(int i=2;i<=n;i++)
        {
            a[i]= (int) (((Math.pow(i,2))*a[i-1])-(a[i-2])+(Math.pow(3, i)));
            System.out.printf(" %d",a[i]);
        }

        
    }
    
}
