import java.util.Date;

public class Account {
    private int id;
    private double balance;
    private double annualInterestRate;
    private Date dateCreated;
    private double annualInterestRates;

    public Account(){}
    public Account(int id ,double balance)
    {
       this.id = id;
       this.balance = balance;
    }
    public int getId()
    {
        return this.id;
    }
    public double getBalance()
    {
        return this.balance;
    }
    public double getAnnualInterestRate()
    {
        return this.annualInterestRate;
    }
    public Date getDateCreated()
    {
        return this.dateCreated;
    }
    public void setId(int id)
    {
        this.id = id ;
    }
    public void setBalance(double balance)
    {
        this.balance = balance ;
    }
    public void setAnnualInterestRate(double annualInterestRate)
    {
        this.annualInterestRate = annualInterestRate;
    }
    public void setDateCreated(Date dateCreated)
    {
        this.dateCreated = dateCreated ;
    }
    public double getMonthlyInterestRate()
    {
        double MonthlyInterestRate;
        MonthlyInterestRate = annualInterestRate/12;
        return MonthlyInterestRate;
    }
    public double getMonthlyInterest()
    {
        double MonthlyInterest;
        MonthlyInterest = getMonthlyInterestRate()*balance;
        return MonthlyInterest;
    }
    public void withdraw(double withdraw)
    {
        balance = balance - withdraw;
    }
    public void deposit(double deposit)
    {
        balance = balance + deposit ;
    }
}
