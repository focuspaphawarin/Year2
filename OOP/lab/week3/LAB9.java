package OOP.LAB.week3;
import java.util.Scanner;
public class LAB9 
{

public class CheckTriangle {
    public static boolean leftTheLine(double x0,double y0,double x1,double y1,double x2,double y2){
        if(x0>x2){
            return true;
        }
        else{
            return false;
        }
    }
    public static boolean onTheSameLine(double x0,double y0,double x1,double y1,double x2,double y2){
        if(x0<=x2 && x2<=x1){
            return true;
        }
        else{
            return false;
        }
    }
    public static boolean RightTheLine(double x0,double y0,double x1,double y1,double x2,double y2){
        if(x1<x2){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double x0,y0,x1,y1,x2,y2;
            x0=input.nextDouble();
            y0=input.nextDouble();
            x1=input.nextDouble();
            y1=input.nextDouble();
            x2=input.nextDouble();
            y2=input.nextDouble();
            if(onTheSameLine(x0,y0,x1,y1,x2,y2)){
                System.out.println("0");
            }
            else if(RightTheLine(x0,y0,x1,y1,x2,y2)){
                System.out.println("1");
            }
            else if(leftTheLine(x0,y0,x1,y1,x2,y2)){
                System.out.println("2");
            }
    }
}
}
