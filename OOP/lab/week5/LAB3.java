package OOP.LAB.week5;

import java.util.ArrayList;
import java.util.Scanner;

public class LAB3 
{
    public static void main(String[] args)
    {
        Scanner SC = new Scanner(System.in);
        ArrayList<Integer> intArray1 = new ArrayList<Integer>();
        ArrayList<Integer> intArray2 = new ArrayList<Integer>();
        SortMergeList.Insert(intArray1);
        SortMergeList.Insert(intArray2);
        SortMergeList.print(SortMergeList.Intersec(intArray1,intArray2));
    }
}
