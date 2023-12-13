public class Number 
{
    int max = -1 ;
    public int MaxPrime(int num)
    {
        int f = 0;
        if(num == 2)
        {
            max = num ;
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    break;
                }
                if (num>max)
                {
                    max = num;
                }
            }
        }
        return max;
    }
}
