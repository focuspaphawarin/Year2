#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

double func(double x)
{
    double fx;
    fx = pow(x,4)-13;
    return fx;
}

int main()
{
    double xl = 1.5, xr = 2.0;
    double x1,fxr,fxl,fx1;
    while (true)
    {
        fxr = func(xr);
        fxl = func(xl);
        x1 = ((xl*fxr)-(xr*fxl))/(fxr-fxl);
        fx1 = func(x1);
        if (fxl * fx1 > 0)
        {
            xl = x1;
        }
        else
        {
            xr = x1;
        }
        if (abs(fx1) < 0.000001)
        {
            cout << fixed << setprecision(6);
            cout << x1;
            break;
        }
    }
    
}