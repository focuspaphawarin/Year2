#include <iostream>
#include <math.h>

using namespace std;

void Gifts(int n, int gifts[]) 
{
    for (int i=0;i<n-1;++i) 
    {
        for (int j=0;j<n-i-1;++j) 
        {
            if (gifts[j] < gifts[j+1]) 
            {
                int temp = gifts[j];
                gifts[j] = gifts[j+1];
                gifts[j+1] = temp;
            }
        }
    }

    int tw1 = 0;
    int tw2 = 0;
    for (int i=0;i<n;++i) 
    {
        if (tw1<=tw2) 
        {
            tw1 += gifts[i];
        } else 
        {
            tw2 += gifts[i];
        }
    }
    int difference = abs(tw1-tw2);
    cout << difference;
}
int main() 
{
    int n;
    cin >> n;
	n =n*2;
    int gifts[n];
    
    for (int i=0;i<n;++i) 
    {
        cin >> gifts[i];
        
    }
    Gifts(n, gifts);
}