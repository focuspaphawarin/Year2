#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,x2,x3;
    double a[3][4] = {{-2.0,3.0,1.0,9.0},{3.0,4.0,-5.0,0.0},{1.0,-2.0,1.0,-4.0}};
    double anew[3][4] = {{-2.0,3.0,1.0,9.0},{3.0,4.0,-5.0,0.0},{1.0,-2.0,1.0,-4.0}};
    for (int j = 0 ; j < 4; j++) 
    {
        anew[1][j] = ((a[1][j]/a[1][0])*a[0][0])-a[0][j] ;
        cout << anew[1][j] <<" " ;

    }
    cout << endl;
    for (int j = 0 ; j < 4; j++) 
    {
        anew[2][j] = ((a[2][j]/a[2][0])*a[0][0])-a[0][j] ;
        cout << anew[2][j] <<" " ;

    }
    cout << endl;
    for (int j = 1 ; j < 4; j++) 
    {
        anew[2][j] = ((a[2][j]/a[2][1])*a[1][1])-a[1][j] ;
        cout << anew[2][j] <<" " ;

    }
    cout << endl;
    x3 =  a[2][3]/a[2][2];
    x2 = ((a[1][3]) - (x3*a[1][2]))/a[1][1];
    x1 = ((a[0][3]) - (x2 * a[0][1]) - (x3*a[0][2]))/a[0][0];
    cout << x1 <<endl;
    cout << x2 <<endl;
    cout << x3 <<endl;

}
