#include <iostream>

using namespace std;

double func (double c0,double c1 ,double x,double x0)
{
    double fx;
    fx = c0+(c1*(x-x0));
    return fx;
}
int main()
{
    double c0,c1;
    double x0 = 0 ,x1 = 80000 ,y0 = 9.81 ,y1 = 9.5682;
    c0 = y0;
    c1 = (y1-c0)/(x1-x0);
    cout << func(c0,c1,42235,x0); 
}