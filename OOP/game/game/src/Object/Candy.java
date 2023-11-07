package Object;

import javax.imageio.ImageIO;
import java.io.IOException;

public class Candy extends SuperObj
{
    public Candy()
    {
        name = "Candy1";
        try
        {
            image = ImageIO.read(getClass().getResourceAsStream("/res/candy/1p1.png"));
        }catch (IOException e)
        {
            e.printStackTrace();
        }
        name = "Candy2";
        try
        {
            image = ImageIO.read(getClass().getResourceAsStream("/res/candy/1p2.png"));
        }catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}
