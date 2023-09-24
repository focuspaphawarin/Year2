#include <iostream>
using namespace std;

double func (double L0,double L1,double L2,double y0,double y1,double y2)
{
    double fx;
    fx = (L0*y0)+(L1*y1)+(L2*y2);
    return fx;
}
int main()
{
    double x = 42235;
    double L0,L1,L2;
    double x0 = 0 ,x1 = 40000 ,x2 = 80000 ,y0 = 9.81 ,y1 = 9.6879 ,y2 = 9.5682;
    L0 = ((x1-x)*(x2-x))/((x1-x0)*(x2-x0));
    L1 = ((x0-x)*(x2-x))/((x0-x1)*(x2-x1));
    L2 = ((x0-x)*(x1-x))/((x0-x2)*(x1-x2));
    cout << func(L0,L1,L2,y0,y1,y2);
}