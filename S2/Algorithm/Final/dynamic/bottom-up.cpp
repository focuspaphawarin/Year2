#include <iostream>
using namespace std;

int C(int n,int k)
{
    int dp[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            dp[i][j] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}

int main()
{
    cout << C(7,5);
    return 0;
}