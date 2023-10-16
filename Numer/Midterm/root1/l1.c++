#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double x, y, z;
    double a; 
    double r[100];
    for (int i = 0; i <= 10; i++)
    {
        r[i] = 43 * i - 180;
    }

    for (int i = 0; i < 10; i++)
    {
        if (r[i] * r[i + 1] < 0)
        {
            y = i;
            z = i + 1;
            break;
        }
    }
    x = y;
    while (y <= x && x <= z)
    {
        x = x + 0.000001;
        a = 43 * x - 180;
        if (abs(a) < 0.0001)
        {
            cout << x;
            break;

        }
    }
    // cout << y <<endl<< z;
    // 4.18605
}