package OOP.LAB.week5;

import java.util.ArrayList;
import java.util.Scanner;

public class LAB2 
{
    public static void main(String[] args)
    {
        Scanner SC = new Scanner(System.in);
        ArrayList<String> strArray = new ArrayList<String>();String str;
        do{str = SC.next();
            switch(str){
                case "1":
                    strArray = Star.addStar(strArray);
                    Star.print(strArray);
                    break;
                case "2":
                    Star.removeStar(strArray);
                    Star.print(strArray);
                    break;
                default:
                    if(str!="0"){strArray.add(str);}
                    break;}
        }while(!str.equals("0"));
    }
}
