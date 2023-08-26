#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
	double a[3][3]={{-2,3,1},{3,4,-5},{1,-2,1}};
    double b[3]={9,0,-4};
    double L[3][3];
    double U[3][3];	
    double y[3];
	double x[3];

    L[0][0]=a[0][0];
    U[0][1]=a[0][1]/L[0][0];
    U[0][2]=a[0][2]/L[0][0];

    L[1][0]=a[1][0];
    L[1][1]=a[1][1]-(L[1][0]*U[0][1]);
    U[1][2]=(a[1][2]-(L[1][0]*U[0][2]))/L[1][1];

    L[2][0]=a[2][0];
    L[2][1]=a[2][1]-(L[2][0]*U[0][1]);
    L[2][2]=a[2][2]-((L[2][0]*U[0][2])+(L[2][1]*U[1][2]));
    for(k=2;k>0;k--)
    {
		for(i=k-1;i>=0;i--)
        {
			for(j=2;j>0;j--)
            {
                if(i!=j)
                {
				    L[i][j]=0;
                }
                
			}	
		}
	} 
    for(k=0;k<3;k++)
    {
		for(i=k+1;i<3;i++)
        {
			for(j=0;j<2;j++)
            {
                if(i!=j)
                {
				    U[i][j]=0;
                }				
			}	
		}
        U[k][k]=1;
	} 

    y[0]=b[0]/L[0][0];
	for(i=1;i<3;i++)
    {
		double sum = 0.0;
		for(j=i-1;j>=0;j--){
			sum = (L[i][j]*y[j])+sum;
			y[i]=(b[i]-sum)/L[i][i];
		}
	}
    x[2]=y[2]/U[2][2];
	for(i=1;i>=0;i--)
    {
		double sum=0.0;
		for(j=i+1;j<3;j++){
			sum = (U[i][j]*x[j])+sum;
			x[i]=(y[i]-sum)/U[i][i];
		}
	}
    // for(i=0;i<3;i++)
    // {
    //     cout <<"y["<<i+1<< "] = "<<y[i]<<endl;
    // }
    for(i=0;i<3;i++)
    {
        cout <<"x["<<i+1<< "] = "<<x[i]<<endl;
    }
    // cout << "Matrix L:\n";
    // for (i=0;i<3;i++) 
    // {
    //     for (j=0;j<3;j++) 
    //     {
    //         cout << L[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    // cout << "Matrix U:\n";
    // for (i=0;i<3;i++) 
    // {
    //     for (j=0;j<3;j++) 
    //     {
    //         cout << U[i][j] << "\t";
    //     }
    //     cout << endl;
    // }


}
