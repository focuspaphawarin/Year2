#include <iostream>

using namespace std;

double func (double c0,double c1,double c2,double c3,double c4,double x,double x0,double x1,double x2,double x3)
{
    double fx;
    fx = c0+(c1*(x-x0))+(c2*(x-x0)(x-x1))+(c3*(x-x0)(x-x1)(x-x2))+(c4*(x-x0)(x-x1)(x-x2)(x-x3));
    return fx;
}
double cfunc (double xm , double xn)
{
    double ans;
    ans = cfunc(xm,xn)/xm-xn;
    return ans;
}
int main()
{
    double c0,c1,cold,cnew,p_cold;
    double x0 = 0 ,x1 = 20000 ,x2 = 40000 ,x3 = 60000 ,x4 = 80000;
    double y0 = 9.81 ,y1 = 9.7487 ,y2 = 9.6879 ,y3 = 9.6879 ,y4 = 9.5682;
    c0 = y0;
    do
    {
        c1 = y1-c0/x1-x0;
        // c0=c1;
    } while (c1!=x1 || c0!=x0);
    cout << func(c0,c1,42235,x0);
    
}