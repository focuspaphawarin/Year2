#include <iostream>
using namespace std;

double funcL(int n ,int l,double x[n],double a)
{
    double L=0,U=1.0,D=1.0,temp=x[l];
    for(int i=0;i<n;i++)
    {
        if(i==l)
        {
            temp = x[i];
        }
        else
        {
            U *= x[i]-a;
            D *= x[i]-temp;
        }
    //     cout << "U["<<i<<"] = " << U << endl;
    //     cout << "D["<<i<<"] = " << D << endl;
    }
    L = U/D;
    return L;
}
double funcfx(int n,double L[],double y[])
{
    double fx;
    for (int i=0;i<n;i++)
    {
        fx += L[i]*y[i];
    }
    return fx;
}
int main()
{
    int n = 5;
    double a = 42235.0;
    double L[n];
    double x[] = {0,20000,40000,60000,80000};
    double y[] = {9.81,9.7487,9.6879,9.6879,9.5682};
    for(int i=0;i<n;i++)
    {
        L[i] = funcL(n,i,x,a);
        cout << "L["<<i<<"] = " << L[i] << endl;
    }
    double ans = funcfx(n,L,y);
    cout << ans << endl;

}