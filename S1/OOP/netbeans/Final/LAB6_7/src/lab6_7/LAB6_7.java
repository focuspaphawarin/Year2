/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab6_7;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB6_7 {

    /**
     * @param args the command line arguments
     */
     public static void main(String[] args) {
        MyRectangle2D r1 = new MyRectangle2D(3,5,0,0);
        MyRectangle2D r2 = new MyRectangle2D(2,6,0,0);
        System.out.println("Area r1: "+r1.getArea());
        System.out.println("Perimeter r1: "+r1.getPerimeter());
        System.out.println("Area r2: "+r2.getArea());
        System.out.println("Perimeter r2: "+r2.getPerimeter());
        System.out.println("Point(1,0) inside r1? "+r1.contains(1, 0));
        System.out.println("Point(5,6) inside r1? "+r1.contains(5, 6));
        System.out.println("Is r2 inside r1? "+r1.contains(r2));
        System.out.println("Is r2 overlap r1? "+r1.overlaps(r2));
    }
    
}
class Rectangle{
    private double width;
    private double height;
    private double x;
    private double y;
    Rectangle(){
        this.x=0;
        this.y=0;
    }
    Rectangle(double width,double height,double x,double y){
        this.width=width;
        this.height=height;
        this.x=x;
        this.y=y;
    }
    public double getWidth(){
        return width;
    }
    public double getHeight(){
        return height;
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public void setWidth(double width){
        this.width=width;
    }
    public void setHeight(double height){
        this.height=height;
    }
    public void setX(double x){
        this.x=x;
    }
    public void setY(double y){
        this.y=y;
    }
}
class MyRectangle2D extends Rectangle{
    MyRectangle2D(){
        super();
    }
    MyRectangle2D(double width,double height,double x,double y){
        super(width,height,x,y);
    }
    public double getArea(){
        return super.getWidth()*super.getHeight();
    }
    public double getPerimeter(){
        return (super.getWidth()*2)+(super.getHeight()*2);
    }
    public boolean contains(double x,double y){
        if(x>=(super.getX()-super.getWidth())/2 && x<=(super.getX()+super.getWidth())/2 && y>=(super.getY()-super.getHeight())/2 && y<=(super.getY()+super.getHeight())/2){
            return true;
        }
        else{
            return false;
        }
    }
    public boolean contains(MyRectangle2D r){
        if(super.getX()+super.getWidth()/2>=r.getX()+r.getWidth()/2 && super.getX()-super.getWidth()/2<=r.getX()-r.getWidth()/2 && super.getY()+super.getHeight()/2>=r.getY()+r.getHeight()/2 && super.getY()-super.getHeight()/2<=r.getY()-r.getHeight()/2){
            return true;
        }
        else{
            return false;
        }
    }
    public boolean noncontains(MyRectangle2D r){
        if((super.getX()+super.getWidth()/2<r.getX()+r.getWidth()/2 || super.getX()-super.getWidth()/2>r.getX()-r.getWidth()/2) && (super.getY()+super.getHeight()/2<r.getY()+r.getHeight()/2 || super.getY()-super.getHeight()/2>r.getY()-r.getHeight()/2)){
            return true;
        }
        else{
            return false;
        }
    }
    public boolean overlaps(MyRectangle2D r){
        if((!contains(r)) && (!noncontains(r))){
            return true;
        }
        else{
            return false;
        }
    }
}