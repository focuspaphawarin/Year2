import java.util.Scanner;

public class LAB5 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a b c d e f : ");
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        double d = input.nextDouble();
        double e = input.nextDouble();
        double f = input.nextDouble();
        LinearEquation result = new LinearEquation(a, b, c, d, e, f);
        if(result.isSolvable())
        {
            result.showResult();
        }
        else
        {
            System.out.println("the equation has no solution");
        }
    }
    
}
