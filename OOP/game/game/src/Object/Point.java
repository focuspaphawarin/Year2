package Object;

import javax.imageio.ImageIO;
import java.io.IOException;

public class Point extends SuperObj
{
    public void Point()
    {
        name = "Reindeer";
        try
        {
            image = ImageIO.read(getClass().getResourceAsStream("/res/point/reindeer.PNG"));
        }catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}
