package main;

import Object.Candy;

import java.util.Random;

public class AssetSetter
{
    GamePanel gp;
    Random random = new Random();
    public AssetSetter(GamePanel gp)
    {
        this.gp = gp;
    }

    public void setObject()
    {
        gp.obj[0] = new Candy();
        gp.obj[0].x = random.nextInt(800 - 250) + 250;
        gp.obj[0].y = random.nextInt(600 - 450) + 450;

        gp.obj[1] = new Candy();
        gp.obj[1].x = random.nextInt(800 - 250) + 250;
        gp.obj[1].y = random.nextInt(600 - 450) + 450;
    }
}
