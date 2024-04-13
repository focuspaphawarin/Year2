#include<iostream>
#include<cmath>

using namespace std;

bool check(int x[],int k,int row)
{
    for(int i=0;i<k;i++)
    {
        if(x[i]== row || abs(k-i)==abs(x[i]-row))
        {
            return false;
        }
    }
    return true;
}
void n_queen(int x[],int k,int n)
{
    if(k==n){
        for(int i=0;i<k;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
	else{
        for(int row=0;row<n;row++)
        {
            if(check(x,k,row))
            {
                x[k]=row;
                n_queen(x,k+1,n);
            }
        }
    }
}
int main() 
{
    int n,k=0;
    cin >> n;
    int x[n] = {0};
    n_queen(x,k,n);

}

