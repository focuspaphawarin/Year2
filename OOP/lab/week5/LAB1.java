package OOP.LAB.week5;

import java.util.ArrayList;
import java.util.Scanner;

public class LAB1 
{
    public static void main(String[] args)
    {
        ArrayList<Integer> arraylist = new ArrayList<Integer>();
        Scanner input = new Scanner(System.in);
        for(int i = 0;i<50;i++){
            arraylist.add(input.nextInt());
        }
        double sum = 0;
        for(int i = 0;i<arraylist.size();i++){
            sum += arraylist.get(i);
        }
        double avg = sum/50;
        System.out.println(avg);

        int max = -999;
        int min = 999;

        for(int i = 0;i<arraylist.size();i++){
            if(arraylist.get(i)<min){
                min = arraylist.get(i);
            }
        }
        for(int i = 0;i<arraylist.size();i++){
            if(max<arraylist.get(i)){
                max = arraylist.get(i);
            }
        }
        System.out.println(max);
        System.out.println(min);

        for(int i = 0;i<arraylist.size();i++){
            if(arraylist.get(i)%2==0){

            }
            else{
                System.out.print(arraylist.get(i)+" ");
            }
        }
    }
    
}
