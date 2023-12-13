#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double xl = 0.0 ,xr = 10.0 ;
    double xm ;
    double fxl,fxm,fxr;
    int count;
    while(true)
    {
        xm = (xl+xr)/2;
        fxl = pow(xl,2)-7;
        fxm = pow(xm,2)-7;
        fxr = pow(xr,2)-7;
        if(fxl*fxm>0)
        {
            xl=xm;
        }
        else
        {
            xr=xm;
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