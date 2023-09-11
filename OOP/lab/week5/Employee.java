package OOP.LAB.week5;

public class Employee 
{
    int year;
    private String firstname,lastname,id;
    double salary;
    public double earning(){
        return this.salary-((salary/100)*5);
    }
    public double bonus(){
        if(this.year >= 5){return this.salary*12;}
        else{return this.salary*6;}
    }
    public String getfirstname(){
        return this.firstname;
    }
    public String getlastname(){
        return this.lastname;
    }
    public String getid(){
        return this.id;
    }


    public Employee(){}
    public Employee(String firstname,String lastname,String id,double sal,int year){
        this.firstname = firstname;
        this.lastname = lastname;
        this.id = id;
        this.salary = sal;
        this.year = year;
    }
    @Override
    public String toString(){
        return this.firstname+" "+this.lastname+" "+earning()+" "+bonus();
    }
}
