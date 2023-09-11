package OOP.LAB.week3;
import java.util.Scanner;
public class LAB8 {
        static double m(int n){
        double x = 4,mi=0;
        for(int i=1;i<=n;i++){
            mi += (Math.pow(-1, i+1))/((2*i)-1);
        }
        return x*mi;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println(m(input.nextInt()));
    }
}