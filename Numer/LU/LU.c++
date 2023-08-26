#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
	double a[3][3]={{-2,3,1},{3,4,-5},{1,-2,1}};
    double L[3][3];
    double U[3][3];	

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
    for(k=0;k<2;k++)
    {
		for(i=k+1;i<3;i++)
        {
			for(j=0;j<2;j++)
            {
                if(i!=j)
                {
				    a[i][j]=0;
                }				
			}	
		}
        if(k==k)
        {
            a[k][k]=1;
        }
	} 
    cout << "Matrix a:\n";
    for (i=0;i<3;i++) 
    {
        for (j=0;j<3;j++) 
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

}