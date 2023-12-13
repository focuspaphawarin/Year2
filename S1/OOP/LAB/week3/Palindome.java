package OOP.LAB.week3;

public class Palindome 
{
    String s;
    public void Palindrome() {}
    public void Palindrome(String s)
    {
        this.s = s;
    }
    public boolean isPalindrome() 
    {
        int i=0,
        j=s.length()-1;
        while (i<j) 
        {
            if (s.charAt(i)!=s.charAt(j)) 
            {
                return false;
            }
                i++;
                j--;
            }
            return true;
    }
}
