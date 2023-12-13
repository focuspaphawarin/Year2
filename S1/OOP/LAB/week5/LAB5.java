package OOP.LAB.week5;

import java.util.Scanner;

public class LAB5
{
    public static void main(String[] args)
    {
        Scanner SC = new Scanner(System.in);
        System.out.print("Enter n : ");
        int n = SC.nextInt();
        arrayListEmp EmpList = new arrayListEmp(n);
        EmpList.Createarr();
        EmpList.printEmp(EmpList.arrayEarn);
    }
}
