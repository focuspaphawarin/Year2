public class Bird extends Animal{
    public Bird()
    {
        super();
        System.out.println("A new animal B create");
    }
    @Override
    public void sleep(){
        System.out.println("A new animal B sleep");
    }
    @Override
    public void eat(){
        System.out.println("A new animal B eat");
    }
}
