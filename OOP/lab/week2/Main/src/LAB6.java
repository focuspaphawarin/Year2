public class LAB6 
{
    public static void main(String[] args) 
    {
        Account id = new Account(1122,20000);
        id.setAnnualInterestRate(4.5/100);
        id.withdraw(2500);
        id.deposit(3000);
        id.setDate(new Date(24,02,2004));
        System.out.println(id.getBalance());
        System.out.println((id.getMonthlyInterest()));
        }
    
}
