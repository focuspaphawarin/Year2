#include<iostream>
using namespace std;

double Mfunc (double x[5],double y[5],int n)
{
    double m;
    for(int i=1;i<n-1;i++)
    {
        m = ((y[i]-y[i-1])/(x[i]-x[i-1]));
    }
    return m;
}
double func (double x[5],double y[5],double a,int n,double m)
{
    double f;
    for(int i=0;i<n-1;i++)
    {
        f = y[i]+(m*(a-x[i]));
    }
    return f;
}

int main()
{
    int n = 5;
    double a = 4.5,f=0.0,m=0.0;
    double x[] = {2,4,6,8,10};
    double y[] = {9.5,8.0,10.5,39.5,72.5};
    double ans[n];
    for(int i=0;i<n-1;i++)
    {
        m = Mfunc(x,y,n);
        f = func(x,y,a,n,m);
        ans[i] = f;
        cout << "x"<<i<<" = "<< x[i]<<endl;
        cout << "y"<<i<<" = "<< y[i]<<endl;
        cout << "a"<<" = "<< a<<endl;
        cout << "m"<<" = "<< m<<endl;
        cout <<"f"<<i+1<<"(x) = "<<ans[i]<<endl;
        cout <<"\n";
    }
}