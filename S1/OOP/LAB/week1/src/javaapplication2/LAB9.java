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
public class LAB9 {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int[] array = new int[1000];
        int max = 0;
        int count = 0;
        for (int i = 0; true; i++) {
            array[i] = input.nextInt();
            if (array[i] <= 0) {
                break;
            }
            if (array[i] > max) {
                max = array[i];
                count = 1;
            } else if (array[i] == max) {
                count++;
            }
        }

        System.out.println("Max value: " + max);
        System.out.println("Count of max: " + count);
    }
    
}
