package Tile;

import main.GamePanel;

import javax.imageio.ImageIO;
import java.awt.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class TileManager
{
    GamePanel gp;
    Tile[] tile;
    int mapTileNumber[][];

    public TileManager(GamePanel gp)
    {
        this.gp = gp;
        tile = new Tile[10];
        mapTileNumber = new int[gp.maxScreeCol][gp.maxScreenRow];
        getTileImage();
    }
    public void getTileImage()
    {
        try
        {
            tile[0] = new Tile();
            tile[0].image = ImageIO.read(getClass().getResourceAsStream("/res/tiles/trans.png"));

            tile[1] = new Tile();
            tile[1].image = ImageIO.read(getClass().getResourceAsStream("/res/tiles/block.jpg"));

        }catch (IOException e)
        {
            e.printStackTrace();
        }
    }

    public void loadMap()
    {
        try
        {
            InputStream is = getClass().getResourceAsStream("/res/Map/Map1.txt");
            BufferedReader br = new BufferedReader(new InputStreamReader(is));

            int col = 0;
            int row = 0;

            while(col<gp.maxScreeCol && row< gp.maxScreenRow)
            {
                String line = br.readLine();
            }
        }catch (Exception e)
        {

        }
    }

    public void draw(Graphics2D g2)
    {
        int col = 0;
        int row = 0;
        int x = 0;
        int y = 0;
        while (col<gp.maxScreeCol && row<gp.maxScreenRow)
        {
            g2.drawImage(tile[0].image,x,y,gp.tileSize,gp.tileSize,null);
            col++;
            x += gp.tileSize;
            if(col == gp.maxScreeCol)
            {
                col = 0;
                x = 0;
                row++;
                y += gp.tileSize;
            }
        }
    }
 }
