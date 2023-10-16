#include <iostream>

using namespace std;

double func (double c0,double c1 ,double c2,double x,double x0,double x1)
{
    double fx;
    fx = c0+(c1*(x-x0))+((c2*(x-x0)*(x-x1)));
    return fx;
}
int main()
{
    double c0,c1,c2;
    double x0 = 0 ,x1 = 40000 ,x2 = 80000 ,y0 = 9.81 ,y1 = 9.6879 ,y2 = 9.5682;
    c0 = y0;
    c1 = (y1-c0)/(x1-x0);
    c2 = (((y2-y1)/(x2-x1))-c1)/(x2-x0);
    cout << func(c0,c1,c2,42235,x0,x1); 
}