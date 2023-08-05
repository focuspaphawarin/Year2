#include<iostream>

using namespace std;

double func(double x)
{
    double fx;
    fx = (1+(2*x))/4;
    return fx;
}

int main()
{
    double x0=0.00,xnew,xold;
    xold = func(x0);
    while(true)
    {
        xnew = func(xold);
        if (abs(xnew)-abs(xold) < 0.00000000001)
        {
            cout << xnew <<endl;
            break;
        }
        xold=xnew;
    }
}