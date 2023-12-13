#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    double xl = 1.5, xr = 2.0;
    double xm;
    double fxl, fxm, fxr;
    int count;
    while (true)
    {
        xm = (xl + xr) / 2;
        fxl = pow(xl, 4) - 13;
        fxm = pow(xm, 4) - 13;
        fxr = pow(xr, 4) - 13;
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
            cout << fixed << setprecision(6);
            cout << xm;
            break;
        }
    }
}