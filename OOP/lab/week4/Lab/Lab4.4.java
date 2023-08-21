package OOP.LAB.week4.Lab;
import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        System.out.print("n = ");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        double[] A = new double[n];
        System.out.print("A = ");
//        for (int i =0  ; i<n ;i++)
//        {
//            A[i] = input.nextInt();
////            System.out.println("A["+i+"] = " + array[i]);
//        }

    }
}

public class AscendSortFreq
{
    double [] A ;
    double [] B ;
    double [] C ;
    public AscendSortFreq(int n)
    {
    }
    public double AscendSort(double[] A)
    {
        for (int i =0 ; i<n ;i++)
        {
            int min = 0 ;
            if(A[i]<min)
            {
                A[i]=min;
            }
//            System.out.println("A["+i+"] = " + array[i]);
        }
        return A[n];
    }
    public double SortCommuFreq(double[ ] B)
    {
        for (int i =1 ; i<n ;i++)
        {
            int count = 0 ;
            if(B[i]==B[i-1])
            {
                A[i]=min;
            }
//            System.out.println("A["+i+"] = " + array[i]);
        }
        return A[n];
    }
}
