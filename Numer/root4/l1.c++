#include <iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    double fx;
    fx = pow(x,2)-7;
    return fx;
}
double xn(double xo,double xn,double fxo,double fxn)
{
    double x;
    x = xo-(fxo*(xo-xn))/(fxo-fxn);
    return x;
}

int main()
{
    double x0=1.00,x1=2.00,xnew=0.00,xold,p_xnew=0.00,xans;
    xold = xn(x0,x1,func(x0),func(x1)); 
    xnew = xn(x1,xold,func(x1),func(xold)); 
    do 
    {
        p_xnew = xnew;
        xans = xn(xold,xnew,func(xold),func(xnew)); 
        xold=xnew; 
        xnew=xans;
    } while (abs(xans- p_xnew) > 0.0000001);  
    cout << xans << endl;
    return 0;
}

