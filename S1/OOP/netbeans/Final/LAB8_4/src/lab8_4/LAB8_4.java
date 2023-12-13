/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab8_4;
import java.util.ArrayList;
/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB8_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ArrayList<Employee> array = new ArrayList<Employee>();
        for(int i = 0; i < 2; i++)
            array.add(new SalariedEmployee("YAYA"+i, "SalariedEmployee"+i, "id"+i, 10000*(i+1)));
        for(int i = 0; i < 2; i++)
            array.add(new ComEmployee("YAYA"+i, "ComEmployee"+i, "id"+i, 10000*(i+1), 10));
        printEmp(array);
    }
    public static void printEmp(ArrayList<Employee> a){
        ArrayList<Double> earning = new ArrayList<Double>();
        ArrayList<Double> arrayBonus = new ArrayList<Double>();
        for(int i = 0; i < 4; i++){
            earning.add(a.get(i).earning());
            int year = (int)(Math.floor(Math.random()*10));
            arrayBonus.add(a.get(i).bonus(year));
            System.out.println(a.get(i).toString() + " Earning:" +earning.get(i)+ " Bonus: "+ arrayBonus.get(i));
        }
    }
    
}
abstract class Employee{
    private String firstname;
    private String lastname;
    private String id;
    public Employee(String firstname, String lastname, String id){
        this.firstname = firstname;
        this.lastname = lastname;
        this.id = id;
    }
    public abstract double earning();
    public abstract double bonus(int year);
    public String toString(){
        return "firstname: "+ this.firstname + " lastname: " + this.lastname;
    } 
}
class SalariedEmployee extends Employee{
    private double salary;
    public SalariedEmployee(String firstname, String lastname,String id, double sal){
        super(firstname,lastname,id);
        this.salary = sal;
    }
    public double bonus(int year)
    {
        if(year > 5)
        {
            return this.salary*12;
        }
        else {return this.salary*6;}
    }
    public double earning(){
        return this.salary*0.95;
    }
}
class ComEmployee extends Employee {
    private double grossSale;
    private double ComRate;
    public ComEmployee(String firstname, String lastname, String id, double sales, double percent){
        super(firstname, lastname, id);
        this.grossSale = sales;
        this.ComRate = percent;
    }
    public double bonus(int year)
    {
        if(year > 5)
        {
            return this.grossSale*6;
        }
        else {return this.grossSale*3;}
    }
    public double earning(){
        return this.grossSale + (this.grossSale*this.ComRate);
    }
}