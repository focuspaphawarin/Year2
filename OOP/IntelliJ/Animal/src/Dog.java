public class Dog extends Animal
{
    public Dog()
    {
        super();
        System.out.println("A new animal  D create");
    }
    @Override
    public void sleep(){
        System.out.println("A new animal D sleep");
    }
    @Override
    public void eat(){
        System.out.println("A new animal D eat");
    }
}
