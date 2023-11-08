package main;

import java.awt.*;

public class UI
{
    GamePanel gp;
    Font arial_40;
    public UI(GamePanel gp)
    {
        this.gp = gp;
        arial_40 = new Font("Arial",Font.PLAIN,35);
    }
    public void draw(Graphics2D g2)
    {
        g2.setFont(arial_40);
        g2.setColor(Color.BLACK);
        g2.drawString("Score : "+gp.player.sumPoint,50,50);
    }
    public void paintComponent(Graphics g)
    {
        g.setColor(Color.gray);
        g.fillRect(33,10,200,60);
        g.setColor(Color.BLACK);
        g.drawRect(33,10,200,60);

    }
}
