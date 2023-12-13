// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Account id1 = new Account(1122,20000);
        id1.setAnnualInterestRate(4.5/100);
        id1.withdraw(2500);
        id1.deposit(3000);
        System.out.println(id1.getBalance());
        System.out.println((id1.getMonthlyInterest()));
        }
    }
