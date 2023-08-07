#include <iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    double fx;
    fx = pow(x,2)-7;
    return fx;
}
double difffunc(double x)
{
    double fx;
    fx = 2*x;
    return fx;
}
double xn(double x,double fx,double difffx)
{
    double xn;
    xn = x - (fx/difffx);
    return xn;
}

int main()
{
    double x0=2.00,xnew=0.00,xold,p_xold;
    xold = xn(x0,func(x0),difffunc(x0)); 
    do {
        p_xold = xold;
        xnew = xn(xold,func(xold),difffunc(xold)); 
        xold=xnew; 
    } while (abs(xnew - p_xold) > 0.0000001);  
    cout << xnew << endl;

}

