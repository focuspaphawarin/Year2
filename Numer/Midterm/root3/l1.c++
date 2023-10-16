#include<iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    double fx;
    fx = (1+(2*x))/4;
    return fx;
}

int main()
{
    int i=0;
    double x0=0.00,xnew=0.00,xold,p_xold;
    xold = func(x0); 
    do {
        p_xold = xold;
        xnew = func(xold); 
        xold=xnew; 
    } while (abs(xnew-p_xold) > 0.0000001);
    cout << xnew << endl;
}
