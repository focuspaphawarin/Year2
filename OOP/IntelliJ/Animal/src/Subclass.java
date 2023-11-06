public class Subclass extends SuperClass
{
    private int num = 10;

    protected int getNumbers()
    {
        return num + 5;
    }
    public static  void main(String[] args)
    {
        Subclass s = new Subclass();
        System.out.println(s.getNumber());
    }
}
