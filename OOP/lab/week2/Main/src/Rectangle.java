public class Rectangle 
{
    double width,height;
    Point center,tl,tr,bl,br;
    Rectangle(double x,double y,double widthi,double heighti){
        center = new Point(x,y);
        this.width = widthi;
        this.height = heighti;
        this.tl = new Point(center.x-(width/2),center.y+(height/2));
        this.tr = new Point(center.x+(width/2),center.y+(height/2));
        this.bl = new Point(center.x-(width/2),center.y-(height/2));
        this.br = new Point(center.x+(width/2),center.y-(height/2));
    }
    void PositionCheck(Rectangle r2){
        if(r2.tl.x>=this.tr.x ||  r2.tl.y<=this.bl.y || r2.tr.x<=this.tl.x ||  r2.bl.y>=this.tl.y  ){
            System.out.println("r2 is outside r1");
        }else if(r2.tr.x<=this.tr.x && r2.tl.x>=this.tl.x && r2.tr.y <= this.tr.y && r2.br.y>=this.br.y){
            System.out.println("r2 is inside r1");
        }else{
            System.out.println("r2 is overlaps r1");
        }
    }
}
