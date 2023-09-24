#include<iostream>
using namespace std;

int main()
{

}

// #include<iostream>
// using namespace std;

// void func(double x[])
// {
//     double a[4][4] = {{5,2,0,0},{2,5,2,0},{0,2,5,2},{0,0,2,5}};
//     double b[4] = {12,17,14,7};
//     double ans[4];
//     for(int i=0;i<4;i++)
//     {
// 		double sum = 0.0;
// 		for(int j=i+1;j<4;j++)
//         {
// 			sum = (a[i][j]*x[j])+sum;
// 			ans[i]=(b[i]-sum)/a[i][i];
// 		}
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
//     for(int i=0;i<4;i++)
//     {
//         cout <<"x["<<i+1<< "] = "<<xnew[i]<<endl;
//     }
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
