#include <iostream>
#include <math.h>
using namespace std;

double funcfx(int maxd,double arrfx[],double x)
{
    double fx;
    for(int i=maxd;i>=0;i--)
    {
        fx += arrfx[i]*(pow(x,i));
    }
    return fx;
}
double funcIn(int maxd,double arrfx[],int x)
{
    double fx=0;
    for(int i=maxd;i>=0;i--)
    {
        fx += (arrfx[i]*(pow(x,i+1)))/(i+1);
    }
    return fx;
}
// double funcMid(double xn,double x0,double h,double maxd,double arrfx[])
// {
//     double midx = x0;
//     double sum = 0.0;
//     for(int i=1;midx!=xn;i++)
//     {
//         midx = x0+(i*h); 
//         sum += funcfx(maxd,arrfx,midx);
//         // cout <<"x"<<i<<" = "<< midx ;
//         // cout <<" f("<<midx<<") = "<< sum << endl;
//     }
//     sum = sum-funcfx(maxd,arrfx,xn);
//     return sum;
// }

int main()
{
    int n = 2;
    double x0 = 2.0 ,xn = 8.0;
    double h = (xn-x0)/n;
    cout << "H = "<<h<<endl;

    int maxd ;
    cout <<" Enter Max Degree : ";
    cin >> maxd ;
    double arrfx[maxd];
    for(int i=maxd;i>=0;i--)
    {
        cout << "Degree "<<i<<" :";
        cin >> arrfx[i] ;
    }

    // double fxn = funcIn(maxd,arrfx,xn);
    // double fx0 = funcIn(maxd,arrfx,x0);
    // cout << "REAL = " << fxn-fx0 << endl;

    // cout << " f(x0) = " << funcfx(maxd,arrfx,x0) << endl;
    // cout << " f(xn) = " << funcfx(maxd,arrfx,xn) << endl;
    // cout << " sumfxMid = " << funcMid(xn,x0,h,maxd,arrfx) << endl;

    double midx = x0;
    double sum = 0.0;
    for(int i=1;midx!=xn;i++)
    {
        midx = x0+(i*h); 
        sum += funcfx(maxd,arrfx,midx);
        cout <<"x"<<i<<" = "<< midx ;
        cout <<" f("<<midx<<") = "<< sum << endl;
    }
    sum = sum-funcfx(maxd,arrfx,xn);
    // cout <<"Sum = "<< sum << endl;


    double I = 0.0;
    I = h/2*(funcfx(maxd,arrfx,x0)+funcfx(maxd,arrfx,xn)+(2*sum));
    // I = h/2*(funcfx(maxd,arrfx,x0)+funcfx(maxd,arrfx,xn)+(2*(funcMid(xn,x0,h,maxd,arrfx))));
    cout << "I = " <<I<<endl;
}