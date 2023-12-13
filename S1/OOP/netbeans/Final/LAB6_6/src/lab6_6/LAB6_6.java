/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab6_6;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB6_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Account Client = new Savingaccount(1123,20000,10,"OCT",2022);
        Account Client2 = new Fixaccount(1124,20000,10,"OCT",2022);
        Account Client3 = new Account(1100,20000,10,"OCT",2022);
        Client.Setannualinterest(4.5);
        Client2.Setannualinterest(7.0);
        Client.withdraw(2500);
        Client.deposit(3000);
        Client2.Transfer(1, Client3);
        System.out.println(Client.toString());
    }
    
}
class Savingaccount extends Account{
    Savingaccount(int id, double balance, int d, String m ,int y){
        super(id, balance, d, m, y);
    }
    void Transfer(double amount,  Account sec){
        sec.Setbalance(sec.Getbalance()+amount);
        this.Setbalance(this.Getbalance()-amount);
    }
}

class Fixaccount extends Account{
    Fixaccount(int id, double balance, int d, String m ,int y){
        super(id, balance, d, m, y);
    }
    @Override
    void withdraw(double amount){
        if(this.Getdate().y > 1)
            super.withdraw(amount);
    }
    void Transfer(double amount,  Account sec){
        System.out.println("ERROR CAN NOT TRANSFER");
    }
}

class Account {
    private int id;
    private double balance,annualinterest;
    private Date dataCreated;
    Account(){
        this(0, 0, 23, "Jan", 2022);
    }
    Account(int id, double balance, int d, String m ,int y){
        this.id = id;
        this.balance = balance;
        this.annualinterest = 0;
        this.dataCreated = new Date(d, m, y);
    }
    void Setid(int id){
        this.id = id;
    }
    void Setbalance(double balance){
        this.balance = balance;
    }
    void Setannualinterest(double annualinterest){
        this.annualinterest = annualinterest;
    }
    void Setdate(Date date){
        this.dataCreated = date;
    }
    int Getid(){
        return this.id;
    }
    double Getbalance(){
        return this.balance;
    }
    double Getannualinterest(){
        return this.annualinterest;
    }
    Date Getdate(){
        return this.dataCreated;
    }
    double getMonthlyinterestRate(){
        return this.annualinterest/12.0;
    }
    double getMonthlyinterest(){
        return (this.annualinterest/100/12.0)*this.balance; 
    }
    void withdraw(double amount){
        this.balance = this.balance - amount >= 0 ? this.balance - amount : this.balance;
    }
    void deposit(double amount){
        this.balance = this.balance + amount;
    }
    @Override
    public String toString(){
        return "ID: "+ this.id +"\nBefore Balance: "+this.balance+"\nAnnual: "+this.annualinterest+"\nMonthlyInterest: "+this.getMonthlyinterest()+"\nNow Balance: "+(this.balance+this.getMonthlyinterest())+"\nCreated: "+this.dataCreated.toString();
    }
    void Transfer(double amount,  Account sec){
        sec.balance = sec.balance + amount;
        this.balance = this.balance - amount >= 0 ? this.balance - amount : this.balance;
    }
}

class Date {
    protected int d,y;
    protected String m;
    Date(int d, String m, int y){
        this.d = d;
        this.m = m;
        this.y = y;
    }
    @Override
    public String toString(){
        return "day: "+d+" month: "+m+" year:" +y;
    }

}