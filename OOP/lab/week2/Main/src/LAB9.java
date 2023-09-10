import java.util.Scanner;

public class LAB9 
{
    public static void main(String[] args)
    {
        Number obj = new Number();
        int num ;
        Scanner input = new Scanner(System.in);
        do
        {
            num = input.nextInt();
            obj.MaxPrime(num);
        }while (num!=0);
        System.out.println("Max = "+obj.MaxPrime(num));
    }
}
