#include<iostream>
using namespace std;

void backtracking(int n,int k,char x[],int ones,int i)
{
    if(i==n)
    {
        if(ones==k)
        {
            x[n] = '\0';
            cout << x << endl;
        }
        return;
    }
    if(ones>k)
    {
        return;
    }
    x[i] = '0';
    backtracking(n,k,x,ones,i+1);
    x[i] = '1';
    backtracking(n,k,x,ones+1,i+1);
}

int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    char x[n+1];
    backtracking(n,k,x,0,0);
    return 0;
}