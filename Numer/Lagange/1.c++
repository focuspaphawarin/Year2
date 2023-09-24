#include <iostream>
using namespace std;

double func (double L0,double L1,double y0,double y1)
{
    double fx;
    fx = (L0*y0)+(L1*y1);
    return fx;
}

int main()
{
    double x = 42235;
    double L0,L1;
    double x0 = 0 ,x1 = 80000 ,y0 = 9.81 ,y1 = 9.5682;
    L0 = (x1-x)/(x1-x0);
    L1 = (x0-x)/(x0-x1);
    cout << func(L0,L1,y0,y1);
}