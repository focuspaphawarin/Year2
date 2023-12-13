import java.util.Scanner;
public class Lab7 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter r1's center x-, y-coordinate,width,and height");
        double x = input.nextDouble();
        double y = input.nextDouble();
        double w = input.nextDouble();
        double h = input.nextDouble();
        Rectangle r1 = new Rectangle(x,y,w,h);
        System.out.print("Enter r2's center x-, y-coordinate,width,and height");
        x = input.nextDouble();
        y = input.nextDouble();
        w = input.nextDouble();
        h = input.nextDouble();
        Rectangle r2 = new Rectangle(x,y,w,h);
        r1.PositionCheck(r2);
    }
    
}
