// #include<iostream>
// using namespace std;

// void func(double metrix[][4],double x[],double b[])
// {
//     double ans[4];
//     // for (int k=0;k<4;k++)
//     // {

//     // }
//     for(int i=0;i<4;i++)
//     {
// 		double sum = 0.0;
//         cout<<"before x = "<<x[i]<<endl;
// 		for(int j=i;j<4;j++)
//         {
// 			sum = (metrix[i][j]*x[j])+sum;
// 			x[i]=(b[i]-sum)/metrix[i][i];
//             cout<<"After x = "<<x[i]<<endl;
// 		}
//         cout<<"Sum = "<<sum<<endl;
//     }
    
// }
// int main()
// {
//     double a[4][4] = {{5,2,0,0},{2,5,2,0},{0,2,5,2},{0,0,2,5}};
//     double x0[4] = {0.0,0.0,0.0,0.0};
//     double b[4] = {12,17,14,7};
//     func(a,x0,b);
//     func(a,x0,b);
//     for(int i=0;i<4;i++)
//     {

//         cout <<"x["<<i+1<< "] = "<<x0[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// void func(double x[])
// {
//     double a[4][4] = {{5,2,0,0},{2,5,2,0},{0,2,5,2},{0,0,2,5}};
//     double b[4] = {12,17,14,7};
//     double ans[4];
    // for(int i=0;i<4;i++)
    // {
	// 	double sum = 0.0;
	// 	for(int j=i+1;j<4;j++)
    //     {
	// 		sum = (a[i][j]*x[j])+sum;
	// 		ans[i]=(b[i]-sum)/a[i][i];
	// 	}
// 	}
//     // return x[];
// }
// int main()
// {    
//     double xold[4],xnew[4],p_xold[4];
//     double x0[4] = {0.0,0.0,0.0,0.0};
//     for(int i=0;i<4;i++)
//     {
//         xold[i] = func(x0[i]);
//         do 
//         {
//             p_xold[i] = xold[i];
//             xnew[i] = func(xold[i]);
//             xold[i] = xnew[i];
//         } while (abs(xnew - p_xold) > 0.001);
//     }
    // for(int i=0;i<4;i++)
    // {
    //     cout <<"x["<<i+1<< "] = "<<xnew[i]<<endl;
    // }
// }

// #include<iostream>
// using namespace std;

// double* func(double x[])
// {
//     double a[4][4] = {{5,2,0,0},{2,5,2,0},{0,2,5,2},{0,0,2,5}};
//     double b[4] = {12,17,14,7};   
//     double xnew[4]; 
//     for(int i=0; i<4; i++)
//     {
//         double sum = 0.0;
//         for(int j=0; j<4; j++)
//         {
//             if (i != j) 
//             {
//                 sum = a[i][j]*x[j]+sum;
//             }
//         }
//         xnew[i] = (b[i] - sum) / a[i][i];
//     }
    
//     // Copy xnew values to x
//     for(int i=0; i<4; i++)
//     {
//         x[i] = xnew[i];
//     }

//     // Return a pointer to x
//     return x;
// }

// int main()
// {    
//     double x[4] = {0.0, 0.0, 0.0, 0.0};

//     // Perform Gauss-Seidel iterations
//     for(int iter=0; iter<10; iter++) // You can change the number of iterations as needed
//     {
//         double* result = func(x);
        
//         cout << "Iteration " << iter + 1 << ":" << endl;
//         for(int i=0; i<4; i++)
//         {
//             cout << "x[" << i + 1 << "] = " << result[i] << endl;
//         }
//     }
// }
#include <math.h>
#include <iostream>
using namespace std;

void func(double X[4], double result[4])
{
    double matrix[4][4] = {{5.0, 2.0, 0.0, 0.0},
                           {2.0, 5.0, 2.0, 0.0},
                           {0.0, 2.0, 5.0, 2.0},
                           {0.0, 0.0, 2.0, 5.0}};
    double Mb[4] = {12.0, 17.0, 14.0, 7.0};

    result[0] = (Mb[0] - X[1] * matrix[0][1] - X[2] * matrix[0][2] - X[3] * matrix[0][3]) / matrix[0][0];
    result[1] = (Mb[1] - X[0] * matrix[1][0] - X[2] * matrix[1][2] - X[3] * matrix[1][3]) / matrix[1][1];
    result[2] = (Mb[2] - X[0] * matrix[2][0] - X[1] * matrix[2][1] - X[3] * matrix[2][3]) / matrix[2][2];
    result[3] = (Mb[3] - X[0] * matrix[3][0] - X[1] * matrix[3][1] - X[2] * matrix[3][2]) / matrix[3][3];
}

int main()
{
    double X[4] = {0.0, 0.0, 0.0, 0.0};
    double result[4];
    double Error = 0.01;
    func(X, result);
    while ((fabs((result[0] - X[0]) / result[0]) * 100 >= Error) &&
           (fabs((result[1] - X[1]) / result[1]) * 100 >= Error) &&
           (fabs((result[2] - X[2]) / result[2]) * 100 >= Error) &&
           (fabs((result[3] - X[3]) / result[3]) * 100 >= Error))
           {
            for (int j = 0; j < 4; j++)
            {
                X[j] = result[j];
                cout << X[j] << endl;
            }
            cout << endl;
            func(X, result);
           }
}