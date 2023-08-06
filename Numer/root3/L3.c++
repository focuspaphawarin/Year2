#include<stdio.h>
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

int main()
{
    double x0=2.00,xnew,xold,p_xold;
    xold = func(x0);
    do{
         p_xold = xold;
        xnew = func(xold); 
        xold=xnew; 

    }
}