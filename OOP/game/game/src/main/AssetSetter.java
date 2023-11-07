package main;

import Object.Candy;
import Object.CandyCane;
import Object.Gift;
import Object.Point;

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
        //candy
        gp.obj[0] = new Candy(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[0].x = random.nextInt(760 - 380) + 380;
        gp.obj[0].y = random.nextInt(650 - 450) + 450;

        gp.obj[1] = new Candy(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[1].x = random.nextInt(760 - 380) + 380;
        gp.obj[1].y = random.nextInt(650 - 450) + 450;

        gp.obj[2] = new Candy(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[2].x = random.nextInt(760 - 380) + 380;
        gp.obj[2].y = random.nextInt(650 - 450) + 450;

        //2
        gp.obj[3] = new CandyCane(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[3].x = random.nextInt(820 - 300) + 300;
        gp.obj[3].y = random.nextInt(600 - 500) + 500;

        gp.obj[4] = new CandyCane(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[4].x = random.nextInt(820 - 250) + 250;
        gp.obj[4].y = random.nextInt(600 - 500) + 500;

        //gift
        gp.obj[5] = new Gift(random.nextInt(3 - 1 + 1) + 1);
        gp.obj[5].x = random.nextInt(820 - 300) + 300;
        gp.obj[5].y = random.nextInt(650 - 550) + 550;
//
//        //point
//        gp.obj[6] = new Point();
//        gp.obj[6].x = 550 * gp.tileSize;
//        gp.obj[6].y = 200 * gp.tileSize;
    }
}
