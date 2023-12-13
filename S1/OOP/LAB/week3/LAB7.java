package OOP.LAB.week3;

import java.util.Scanner;

public class LAB7 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        MyTriangle obj = new MyTriangle();
        obj.side1 = sc.nextDouble();
        obj.side2 = sc.nextDouble();
        obj.side3 = sc.nextDouble();
        int n;
        
        System.out.println("Ans: "+obj.Area(obj.side1,obj.side2,obj.side3));
    }
}
