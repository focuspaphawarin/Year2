package entity;

import main.GamePanel;
import main.KeyHandler;

import entity.Entity;
import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;

public class Player extends Entity
{
    GamePanel gp;
    KeyHandler keyH;


    public Player(GamePanel gp,KeyHandler keyH)
    {
        this.gp = gp;
        this.keyH = keyH;

        solidArea = new Rectangle();
        solidArea.x = 10*2;
        solidArea.y = 36*2;
        solidArea.width = 10*2;
        solidArea.height = 10*2;
        setDefaultValues();
        getPlayerImage();
    }
    public void setDefaultValues()
    {
        x = 550;
        y = 450;
        speed = 5;
        direction = "up";
    }
    public void getPlayerImage()
    {
        try
        {
            wl1 = ImageIO.read(getClass().getResourceAsStream("/res/player/SantaStopL.PNG"));
            wl2 = ImageIO.read(getClass().getResourceAsStream("/res/player/SantaWalkL.PNG"));
            wr1 = ImageIO.read(getClass().getResourceAsStream("/res/player/SantaStopR.PNG"));
            wr2 = ImageIO.read(getClass().getResourceAsStream("/res/player/SantaWalkR.PNG"));
        }catch (IOException e)
        {
            e.printStackTrace();
        }
    }
    public void update()
    {
        if (keyH.upPressed == true || keyH.downPressed == true || keyH.leftPressed == true || keyH.rightPressed == true)
        {

            if (keyH.upPressed == true)
            {
                direction = "up";
            } else if (keyH.downPressed == true)
            {
                direction = "down";
            } else if (keyH.leftPressed == true)
            {
                direction = "left";
            } else if (keyH.rightPressed == true)
            {
                direction = "right";
            }

            //check tile collision
            collisionOn = false;
            gp.cChecker.checkTile(this);

            //if collision is false , player can move
            if(collisionOn == false)
            {
                switch (direction)
                {
                    case "up":
                        y -= speed;
                        break;
                    case "down":
                        y += speed;
                        break;
                    case "left":
                        x -= speed;
                        break;
                    case "right":
                        x += speed;
                        break;
                }
            }
            spriteCounter++;
            if(spriteCounter > 10)
            {
                if(spriteNum == 1)
                {
                    spriteNum = 2;
                } else if (spriteNum == 2)
                {
                    spriteNum = 1;
                }
                spriteCounter = 0;
            }
        }
    }
    public  void draw(Graphics2D g2)
    {
//        g2.setColor(Color.magenta);
//        g2.fillRect(x,y,gp.titleSize,gp.titleSize);

        BufferedImage image = null;

        switch (direction)
        {
            case "up":
                if(spriteNum == 1)
                {
                    image = wl1;
                }
                if (spriteNum == 2)
                {
                    image = wl2;
                }
                break;
            case "down":
                if(spriteNum == 1)
                {
                    image = wr1;
                }
                if (spriteNum == 2)
                {
                    image = wr2;
                }
                break;
            case "left":
                if(spriteNum == 1)
                {
                    image = wl1;
                }
                if (spriteNum == 2)
                {
                    image = wl2;
                }
                break;
            case "right":
                if(spriteNum == 1)
                {
                    image = wr1;
                }
                if (spriteNum == 2)
                {
                    image = wr2;
                }
                break;
        }
        g2.drawImage(image,x,y,gp.tileSize*2,gp.tileSize*2,null);
    }
}
