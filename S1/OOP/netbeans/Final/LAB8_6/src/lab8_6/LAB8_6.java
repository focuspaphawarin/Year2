/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab8_6;

/**
 *
 * @author paphawarinsuchantabut
 */
public class LAB8_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    interface Movable{
    public void moveUp();
    public void moveDown();
    public void MoveLeft();
    public void MoveRight();
}

class MovableCircle implements Movable{
    private int radius;
    private MovablePoint center;
    public MovableCircle(int x, int y, int xSpeed, int ySpeed, int radius){
        this.center = new MovablePoint(x, y, xSpeed, ySpeed);
        this.radius = radius;
    }
    @Override
    public String toString(){
        return "";
    }
    @Override
    public void moveUp(){

    }
    @Override
    public void moveDown(){

    }
    @Override
    public void MoveLeft(){

    }
    @Override
    public void MoveRight(){

    }
}

class MovablePoint implements Movable{
    int x;
    int y;
    int xSpeed;
    int ySpeed;
    public MovablePoint(int x, int y, int xSpeed, int ySpeed){
        this.x = x;
        this.y = y;
        this.xSpeed = xSpeed;
        this.ySpeed = ySpeed;
    }
    @Override
    public String toString(){
        return "";
    }
    @Override
    public void moveUp(){

    }
    @Override
    public void moveDown(){

    }
    @Override
    public void MoveLeft(){

    }
    @Override
    public void MoveRight(){

    }

}
}
