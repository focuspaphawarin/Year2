package entity;

import java.awt.*;
import java.awt.image.BufferedImage;

public class Entity
{
    public int x,y;
    public int speed;

    public BufferedImage wl1,wl2,wr1,wr2;
    public String direction;

    public int spriteCounter = 0;
    public int spriteNum = 1;
    public Rectangle solidArea;

    //solid obj
    public int solidAreaDefaultX , solidAreaDefaultY;
    public boolean collisionOn = false;

}
