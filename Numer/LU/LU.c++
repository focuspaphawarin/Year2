#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
	double a[3][3]={{-2,3,1},{3,4,-5},{1,-2,1}};
    double L[3][3];
    double U[3][3];	
    // //columnL1
    // for(i=0;i<3;i++)
    // {
    //     L[i][0]=a[i][0];
    // }
    // //rowU1
    // for(j=0;j<3;i++)
    // {
    //     U[0][j]=a[0][j]/L[0][0];
    // }
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


    cout << "Matrix L:\n";
    for (i=0;i<3;i++) 
    {
        for (j=0;j<3;j++) 
        {
            cout << L[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Matrix U:\n";
    for (i=0;i<3;i++) 
    {
        for (j=0;j<3;j++) 
        {
            cout << U[i][j] << "\t";
        }
        cout << endl;
    }


}
