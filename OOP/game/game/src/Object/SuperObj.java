package Object;

import main.GamePanel;

import java.awt.*;
import java.awt.image.BufferedImage;

public class SuperObj
{
    public BufferedImage image;
    public String name;
    public boolean collision = false;
    public int x,y;
    public Rectangle solidArea = new Rectangle(0,0,48,48);
    public int solidAreaDefaultX = 0;
    public int solidAreaDefaultY = 0;

    public String entityType = "Gift";

    public void setEntityType(String entityType) {
        this.entityType = entityType;
    }

    public String getEntityType() {
        return entityType;
    }

    public void draw(Graphics2D g2, GamePanel gp)
    {
//        int screenX = x - gp.player.x + gp.player.screenX;
//        int screenY = y - gp.player.y + gp.player.screenY;

//        if(x + gp.tileSize > gp.player.x - gp.player.screenX && x - gp.tileSize < gp.player.x - gp.player.screenX &&
//           y + gp.tileSize > gp.player.y - gp.player.screenY && y - gp.tileSize < gp.player.y - gp.player.screenY){
//            g2.drawImage(image,screenX,screenY,gp.tileSize,gp.tileSize,null);
//        }
        g2.drawImage(image,x,y,gp.tileSize,gp.tileSize,null);
    }
}
