package OOP.LAB.week3;

public class RoachPopulation 
{
    int n;
    public RoachPopulation(){}
    public RoachPopulation(int n)
    {
        this.n = n;
    }
    public void waitR()
    {
        n = n*2;
    }
    public void spray()
    {
        n = n-((n*10)/100);
    }
    public int getRoachPopulation()
    {
        return n;
    }
    
}
