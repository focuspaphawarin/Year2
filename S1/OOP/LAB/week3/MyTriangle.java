package OOP.LAB.week3;

public class MyTriangle 
{
    double side1,side2,side3;
    public MyTriangle(){

    }public MyTriangle(double side1,double side2,double side3){
        this.side1 =side1;
        this.side2 =side2;
        this.side3 =side3;
    }public boolean isVaild(double side1,double side2,double side3){
        double n;
        n = side1+side2;
        if (n<=side3) {
            return false;
        }else{
            return true;
        }
    }
    public double Area(double side1, double side2, double side3){
    double area,s;
    s = (side1 + side2 + side3)/2;
    area= Math.sqrt(s*(s - side1)*(s - side2)*(s - side3));
    return area;
    }
}
