package OOP.LAB.week3;

import java.util.Scanner;

public class LAB6 
{
    public static void main(String[] args) 
    {
        Palindome obj =new Palindome();
        Scanner sc = new Scanner(System.in);
        int i;
        obj.s = sc.next();
        if (obj.isPalindrome()==true) {
            i =0;
        }else{
            i =1;
        }
        System.out.println("Ans: "+i);
    }
}
