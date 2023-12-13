/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;
import java.util.Scanner;

public class LAB6 {
    public static void main(String[] args) {
        System.out.print("Please input number of columns and rows: ");
        Scanner input = new Scanner(System.in);
        int column = input.nextInt();
        int row = input.nextInt();
        int[][] array = new int[column][row];

        for (int i = 0; i < column; i++) 
        {
            for (int j = 0; j < row; j++) 
            {
                array[i][j] = (i+1) * (j+1);
                if(array[i][j]==1)
                {
                    System.out.print("  ");
                }
                else{System.out.print(+array[i][j]+" ");}
            }
            System.out.println();
        }
    }
}