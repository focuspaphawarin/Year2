/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab6_8;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB6_8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Line line1 = new Line(1,2,3,4);
        Line line2 = new Line(2,3,4,5);
        Rectangle rect1 = new Rectangle(6,8,0,0);
        Rectangle rect2 = new Rectangle(3,5,-16,1);
        System.out.println(contains(line1,rect1));
        System.out.println(cross(line1,line2));
        System.out.println(overlaps(rect1,rect2));
        System.out.println(distance(line1,rect1));
    }
    public static int contains(Line a,Rectangle b){
        double minX = Math.min(a.x1, a.x2);
        double maxX = Math.max(a.x1, a.x2);
        double minY = Math.min(a.y1, a.y2);
        double maxY = Math.max(a.y1, a.y2);
        if(minX >= b.x && maxX <= b.x + b.width && minY >= b.y && maxY <= b.y + b.height){
            return 1; // Line is inside the rectangle
        }
        else{
            return 0; // Line is outside the rectangle
        }
    }
    public static int cross(Line a,Line b){
        double den=(b.y2-b.y1)*(a.x2-a.x1)-(b.x2-b.x1)*(a.y2-a.y1);
        if(den==0) {
            return 0; // Lines are parallel, no intersection
        }
        double ua=((b.x2-b.x1)*(a.y1-b.y1)-(b.y2-b.y1)*(a.x1-b.x1))/den;
        double ub=((a.x2-a.x1)*(a.y1-b.y1)-(a.y2-a.y1)*(a.x1-b.x1))/den;
       
        if(ua>=0 && ua<=1 && ub>=0 && ub<=1){
            return 1; // Lines overlap
        }
        else{
            return 0; // Lines do not overlap
        }
    }
    public static int overlaps(Rectangle a,Rectangle b){
        double aLeft=a.x;
        double aRight=a.x+a.width;
        double aTop=a.y;
        double aBottom=a.y+a.height;

        double bLeft=b.x;
        double bRight=b.x+b.width;
        double bTop=b.y;
        double bBottom=b.y+b.height;
        
        if(aLeft<bRight && aRight>bLeft && aTop<bBottom && aBottom>bTop){
            return 1; // Rectangles overlap
        }
        else{
            return 0; // Rectangles do not overlap
        }
    }
    public static double distance(Line a,Rectangle b){
        double rect_midX=b.x+(b.width/2);
        double rect_midY=b.y+(b.height/2);
        double line_midX=(a.x1+a.x2)/2;
        double line_midY=(a.y1+a.y2)/2;
        return Math.sqrt(Math.pow(line_midX-rect_midX,2)+Math.pow(line_midY-rect_midY,2));  
    }
    
}
class Rectangle{
    double width;
    double height;
    double x;
    double y;
    Rectangle(){}
    Rectangle(double w,double h,double x,double y){
        this.width=w;
        this.height=h;
        this.x=x;
        this.y=y;
    }
    public double getArea(Rectangle a){
        return width*height;
    }
}
class Line{
    double x1,y1,x2,y2;
    Line(){}
    Line(double x1,double y1,double x2,double y2){
        this.x1=x1;
        this.y1=y1;
        this.x2=x2;
        this.y2=y2;
    }
    public double getLong(Line a){
        return Math.sqrt(Math.pow((x2-x1),2)-Math.pow((y2-y1),2));
    }
}