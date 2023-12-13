package OOP.LAB.week3;

import java.util.Scanner;

class L{
    double x;
    L next;
    L(double x){
        this.x = x;
        this.next = null;
    }
}
class linklight{
    L h=null;
    public void insert(double x){
        L nl = new L(x);
        if(h == null){
            h = nl;
        }
        else{
            L p=h;
            while(p.next!=null){
                p=p.next;
            }
            p.next=nl;
        }
    }
    public void print(){
        L p=h;
        while(p!=null){
            System.out.println(p.x);
            p=p.next;
        }
    }
}
class plane{
    double x1,x2;
    plane next;
    public int through(linklight x){
        int count = 0;
        L p = x.h;
        while(p != null){
            if(this.x1 < p.x && p.x < this.x2){
                count++;
            }
            p = p.next;
        }
        return count;
    }
    plane(double x1,double x2){
        this.x1 = x1;
        this.x2 = x2;
        this.next = null;
    }
}
class linkplane{
    plane h=null;
    public void insert(double x,double y){
        plane np = new plane(x,y);
        if(h == null){
            h = np;
        }
        else{
            plane p=h;
            while(p.next!=null){
                p=p.next;
            }
            p.next=np;
        }
    }
    public void print(){
        plane p=h;
        while(p!=null){
            System.out.println(p.x1);
            p=p.next;
        }
    }
}
public class LAB10 
{
    public static void main(String[] args)
    {
        Scanner SC = new Scanner(System.in);
        linklight LL = new linklight();
        linkplane LP = new linkplane();
        int n,m,j;
        n=SC.nextInt();
        m=SC.nextInt();
        int count=0;
        for(j=0;j<n;j++){
            LP.insert(SC.nextDouble(), SC.nextDouble());
        }
        for(j=0;j<m;j++){
            LL.insert(SC.nextDouble());
        }
        plane p = LP.h;
        while(p!=null){
            count+=p.through(LL);
            p=p.next;
        }
        System.out.println(count);
    }
}
