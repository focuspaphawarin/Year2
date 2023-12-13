#include <iostream>
#include<cmath>
using namespace std;

int detfunc(int a[3][4])
{
    int det;
    det = ((a[0][0]*a[1][1]*a[2][2])+(a[0][1]*a[1][2]*a[2][0])+(a[0][2]*a[1][0]*a[2][1]))-((a[2][0]*a[1][1]*a[0][2])+(a[2][1]*a[1][2]*a[0][0])+(a[2][2]*a[1][0]*a[0][1]));
    return det;
}
int xfunc(int detai,int deta)
{
    int x;
    x = detai/deta;
    return x;
}
int main()
{
    int deta , deta1 , deta2 , deta3 , x1 , x2 , x3;
    int a[3][4] = {{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
    int a1[3][4] = {{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
    int a2[3][4] = {{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
    int a3[3][4] = {{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
    deta = detfunc(a);
    a1[0][0] = a[0][3]; 
    a1[1][0] = a[1][3]; 
    a1[2][0] = a[2][3]; 
    deta1 = detfunc(a1);
    a2[0][1] = a[0][3]; 
    a2[1][1] = a[1][3]; 
    a2[2][1] = a[2][3]; 
    deta2 = detfunc(a2);
    a3[0][2] = a[0][3]; 
    a3[1][2] = a[1][3]; 
    a3[2][2] = a[2][3]; 
    deta3 = detfunc(a3);
    x1 = xfunc(deta1,deta);
    x2 = xfunc(deta2,deta);
    x3 = xfunc(deta3,deta);
    cout << x1 <<endl;
    cout << x2 <<endl;
    cout << x3 <<endl;
    // cout << deta <<endl;
    // cout << deta1 <<endl;
    // cout << deta2 <<endl;
    // cout << deta3 <<endl;

}

