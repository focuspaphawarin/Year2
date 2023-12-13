package OOP.LAB.week3;

import java.util.Scanner;

public class LAB5 
{
    public static void main(String[] args)
    {
        System.out.println("Enter num , times");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int times = sc.nextInt();

        RoachPopulation obj = new RoachPopulation(n);
        for(int i=0;i<times;i++){
            obj.waitR();
            obj.spray();
        }
        System.out.println("Result number of roachpopulation : "+obj.getRoachPopulation());
    }
}
