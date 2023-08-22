#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    double a[3][6]={{-2,3,1,1,0,0},{3,4,-5,0,1,0},{1,-2,1,0,0,1}};
    double b[3]={9,0,-4};
    double x[3];
    for(k=0;k<2;k++)
    {
		for(i=k+1;i<3;i++)
        {
			double temp=a[i][k];
			for(j=0;j<6;j++)
            {
				a[i][j]=a[i][j]-(a[k][j]/a[k][k]*temp);
			}	
		}
	}
    for(k=2;k>0;k--)
    {
		for(i=k-1;i>=0;i--)
        {
			double temp=a[i][k];
			for(j=5;j>=0;j--)
            {
				a[i][j]=a[i][j]-(a[k][j]/a[k][k]*temp);
                
			}	
		}
	}
	for(i=2;i>=0;i--)
    {
		for(j=5;j>=0;j--)
        {
			a[i][j]=a[i][j]/a[i][i];
		}
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i] = (a[i][j+3]*b[j])+x[i];
        }
    cout <<"x["<<i+1<< "] = "<<x[i]<<endl;
    }
    cout << "Matrix a:\n";
    for (i=0;i<3;i++) 
    {
        for (j=0;j<6;j++) 
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}


