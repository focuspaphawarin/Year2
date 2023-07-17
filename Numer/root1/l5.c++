#include<iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{
    double x,n;
    cin >> x >> n ;
    double xl = 0 ,xr = 1000000;
    double xm;
    double fxl, fxm, fxr;
    int count;
    while (true)
    {
        xm = (xl + xr) / 2;
        fxl = pow(xl, n) - x;
        fxm = pow(xm, n) - x;
        fxr = pow(xr, n) - x;
        if (fxl * fxm > 0)
        {
            xl = xm;
        }
        else
        {
            xr = xm;
        }
        count++;
        // cout <<"xl = "<< xl <<" xm = "<< xm <<" xr = "<<xr<<endl;
        // cout <<"fxl = "<< fxl <<" fxm = "<< fxm <<" fxr = "<<fxr<<endl;
        if (abs(fxm) < 0.000001)
        {
            cout << fixed << setprecision(4);
            cout << xm;
            break;
        }
    }
}