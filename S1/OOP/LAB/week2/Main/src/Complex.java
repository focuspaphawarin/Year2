public class Complex 
{
    private double r, i;

    Complex(double r, double i)
    {
        this.r = r;
        this.i = i;
    }

    Complex(Complex c) {
        this(c.r, c.i);
    }

    public void setR(double r) {
        this.r = r;
    }

    public void setI(double i) {
        this.i = i;
    }

    public void add(Complex c)
    {
        r += c.r;
        i += c.i;
    }

    public void sub(Complex c)
    {
        r -= c.r;
        i -= c.i;
    }

    public void multiply(Complex c)
    {
        double r = this.r * c.r - this.i * c.i;
        double i = this.r * c.i + this.i * c.r;

        this.r = r;
        this.i = i;
    }
    public void divide(Complex c)
    {
        double r = ((this.r*c.r)-(this.i*c.i))/((c.r*c.r)+(c.i*c.i));
        double i = ((this.i*c.r)-(this.r*c.i))/((c.r*c.r)+(c.i*c.i));
        this.r = r;
        this.i = i;
    }

    public void print()
    {
        System.out.println(r + " + " + i +"i");
    }
    
}
