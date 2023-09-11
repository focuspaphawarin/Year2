package OOP.LAB.week5;

import java.util.ArrayList;
import java.util.Scanner;

public class arrayListEmp 
{
    ArrayList<Employee> arrayEarn = new ArrayList<>();
    Scanner SC = new Scanner(System.in);
    int n;

    public void Createarr() {
        for (int i = 0; i < n; i++) {
            System.out.println("Enter Name Surname ID Salary and Years : ");
            String name = SC.next();
            String lname = SC.next();
            String id = SC.next();
            Double sal = SC.nextDouble();
            int y = SC.nextInt();
            arrayEarn.add(new Employee(name, lname, id, sal, y));
        }

    }

    public void printEmp(ArrayList<Employee> a) {
        for (int i = 0; i < a.size(); i++) {
            Employee Emp = a.get(i);
            System.out.println(Emp.toString());
        }
    }

    arrayListEmp() {
    }

    arrayListEmp(int num) {
        this.n = num;
    }
}
