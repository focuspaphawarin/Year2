#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double xl = 0.02 ,xr = 0.03;
    double xm ;
    double fxl,fxm,fxr;
    int count;
    while(true)
    {
        xm = (xl+xr)/2;
        fxl = (43*xl)-1;
        fxm = (43*xm)-1;
        fxr = (43*xr)-1;
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