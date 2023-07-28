#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

double func(double x)
{
    double fx;
    fx = (sqrt(7)+x)/2;
    return fx;
}

int main()
{
    double x0=0.01,xnew,xold;
    xold = func(x0);
    while(true)
    {
        xnew = func(xold);
        if (abs(xnew)-abs(xold) < 0.000001)
        {
            cout << fixed << setprecision(6);
            cout << xnew <<endl;
            break;
        }
        xold=xnew;
    }
}