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
    int n = 2;
    double a = 42235.0;
    double L[n];
    double x[] = {0,80000};
    double y[] = {9.81,9.5682};
    for(int i=0;i<n;i++)
    {
        L[i] = funcL(n,i,x,a);
        cout << "L["<<i<<"] = " << L[i] << endl;
    }
    double ans = funcfx(n,L,y);
    cout << ans << endl;

}





// #include <iostream>
// using namespace std;

// double func (double L0,double L1,double y0,double y1)
// {
//     double fx;
//     fx = (L0*y0)+(L1*y1);
//     return fx;
// }

// int main()
// {
//     double x = 42235;
//     double L0,L1;
//     double x0 = 0 ,x1 = 80000 ,y0 = 9.81 ,y1 = 9.5682;
//     L0 = (x1-x)/(x1-x0);
//     L1 = (x0-x)/(x0-x1);
//     cout << func(L0,L1,y0,y1);
// }