public class LinearEquation 
{
    private double a, b, c, d, e, f, x, y;
    public boolean isSolvable(){
        return (a*d)-(b*c) != 0;
    }
    public double getA()
    {
        return this.a;
    }
    public double getB()
    {
        return this.b;
    }
    public double getC()
    {
        return this.c;
    }
    public double getD()
    {
        return this.d;
    }
    public double getE()
    {
        return this.e;
    }
    public double getF()
    {
        return this.f;
    }
    public double getX()
    {
        calResultX();
        return this.x;
    }
    public double getY()
    {
        calResultY();
        return this.y;
    }
    public void calResultX()
    {
        this.x = ((this.e*this.d)-(this.b*this.f)) / ((this.a*this.d)-(this.b*this.c));
    }
    public void calResultY()
    {
        this.y = ((this.a*this.f)-(this.e*this.c)) / ((this.a*this.d)-(this.b*this.c));
    }
    public void showResult()
    {
        System.out.println("x is "+getX()+" and y is "+getY());
    }
    public LinearEquation()
    {
        this.a = 0;
        this.b = 0;
        this.c = 0;
        this.d = 0;
        this.e = 0;
        this.f = 0;
    }
    public LinearEquation(double a,double b,double c,double d,double e,double f)
    {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
        this.e = e;
        this.f = f;
    }
}
