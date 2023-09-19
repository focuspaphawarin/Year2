#include <iostream>
#include<cmath>

using namespace std;

double func (double c0,double c1,double c2,double c3,double c4,double x,double x0,double x1,double x2,double x3)
{
    double fx;
    fx = c0+(c1*(x-x0))+(c2*(x-x0)*(x-x1))+(c3*(x-x0)*(x-x1)*(x-x2))+(c4*(x-x0)*(x-x1)*(x-x2)*(x-x3));
    return fx;
}
double cfunc (double xm,double xs,double ym, double ys)
{
    double cnew,cold,p_cold,ym,ys;
    if(abs(xm-xs) <= 1)
    {
        return (ym-ys)/(xm-xs);
    }
    else
    {
        p_cold = cold ;
        cnew = (cfunc (xm,xs+1) - cold) / (xm-xs);
        cold = cnew;
        
    }
    return cnew;
}
int main()
{
    double c0,c1,c2,c3,c4,ans;
    double x0 = 0 ,x1 = 20000 ,x2 = 40000 ,x3 = 60000 ,x4 = 80000;
    double y0 = 9.81 ,y1 = 9.7487 ,y2 = 9.6879 ,y3 = 9.6879 ,y4 = 9.5682;
    c0 = y0;
    c1 = cfunc(x1,x0,y1,y0);
    c2 = cfunc(x2,x0,y2,y0);
    c3 = cfunc(x3,x0,y3,y0);
    c4 = cfunc(x4,x0,y4,y0);
    ans = func(c0,c1,c2,c3,c4,42235,x0,x1,x2,x3);
    cout << c0 << endl << c1 << endl << c2 << endl << c3 << endl << c4 << endl;
    cout << ans ;
    
}




    // c0 = y0;
    // c1 = (y1-c0)/(x1-x0);
    // c2 = (((y2-y1)/(x2-x1))-c1)/(x2-x0);
    // c3 = (((((y3-y2)/(x3-x2))-((y2-y1)/(x2-x1)))/(x3-x1))-c2)/(x3-x0);
    // c4 = ((((((y4-y3)/(x4-x3))-((y3-y2)/(x3-x2)))/(x4-x2)-(((y3-y2)/(x3-x2))-((y2-y1)/(x2-x1)))/(x3-x1))/(x4-x1))-c3)/(x4-x0);
    // cout << c0 << endl << c1 << endl << c2 << endl << c3 << endl << c4 << endl;
    // cout << func(c0,c1,c2,c3,c4,42235,x0,x1,x2,x3);

// double cfunc (double xm , double xn)
// {
//     double ans;
//     if (xm == 1 && xn == 0)
//     {
//     ans = cfunc(xm,xn)/xm-xn;
//     }
//     return ans;
// }

