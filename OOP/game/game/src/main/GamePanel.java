package main;

import Tile.Tile;
import entity.Player;
import Object.SuperObj;

import javax.imageio.ImageIO;

import Tile.TileManager;

import javax.swing.*;
import java.awt.*;
import java.io.IOException;

public class GamePanel extends JPanel implements Runnable {
    //Screen Setting
    final int originalTitleSize = 20;
    final int scale = 3;

    public final int tileSize = originalTitleSize * scale;
    public final int maxScreeCol = 20; //16
    public final int maxScreenRow = 12;
    public final int screenWidth = tileSize * maxScreeCol;
    public final int screenHeight = tileSize * maxScreenRow;

    //FPS
    int FPS = 60;

    TileManager tileM = new TileManager(this);
    KeyHandler keyH = new KeyHandler();
    Thread gameThread;
    public CollisionChecker cChecker = new CollisionChecker(this);
    public AssetSetter aSetter = new AssetSetter(this);
    public Player player = new Player(this,keyH);
    public SuperObj obj[] = new SuperObj[10];

//    int playerX = 100;
//    int playerY = 100;
//    int playerSpeed = 4;
    public Image backgroundImage;

    public GamePanel() {
        this.setPreferredSize(new Dimension(screenWidth, screenHeight));
        this.setBackground(Color.pink);
        this.setDoubleBuffered(true);
        this.addKeyListener(keyH);
        this.setFocusable(true);
        //background
        try
        {
            backgroundImage = ImageIO.read(getClass().getResource("/res/background/bgGame.png"));
        } catch (IOException e)
        {
            e.printStackTrace();
        }
    }

    public void setupGame()
    {
        aSetter.setObject();
    }

    public void startGameThread() {
        gameThread = new Thread(this);
        gameThread.start();
    }

    @Override
    public void run ()
    {
        double drawInterval = 1000000000 / FPS;
        double delta = 0;
        long lastTime = System.nanoTime();
        long currentTime;
        long timer = 0;
        long drawCount = 0;

        while (gameThread != null)
        {
            currentTime = System.nanoTime();
            delta += (currentTime-lastTime)/drawInterval;
            timer += (currentTime-lastTime);
            lastTime = currentTime;

            if(delta >= 1)
            {
                update();
                repaint();
                delta--;
                drawCount++;
            }

            if(timer>=1000000000)
            {
                System.out.println("FPS : "+drawCount);
                drawCount = 0;
                timer = 0;
            }
        }
    }
//    public void run() {
//        double drawInterval = 1000000000 / FPS;
//        double nextDrawTime = System.nanoTime() + drawInterval;
//        while (gameThread != null) {
//            long currentTime = System.nanoTime();
//            System.out.println("current time =" + currentTime);
//            update();
//            repaint();
//
//            try {
//                double remainingTime = nextDrawTime - System.nanoTime();
//                remainingTime = remainingTime / 1000000;
//
//                if (remainingTime < 0) {
//                    remainingTime = 0;
//                }
//                Thread.sleep((long) remainingTime);
//                nextDrawTime += drawInterval;
//            } catch (InterruptedException e) {
//                e.printStackTrace();
//                throw new RuntimeException(e);
//            }
//        }
//    }

    public void update()
    {
        player.update();
    }

    public void paintComponent(Graphics g)
    {
        super.paintComponent(g);
        Graphics2D g2 = (Graphics2D) g;
        if (backgroundImage != null)
        {
            g2.drawImage(backgroundImage, 0, 0, screenWidth, screenHeight, this);
        }
        //tile
        tileM.draw(g2);

        //object
        for(int i=0; i<obj.length;i++)
        {
            if(obj[i] != null)
            {
                obj[i].draw(g2,this);
            }
        }

        //player
        player.draw(g2);

        g2.dispose();
    }
}

