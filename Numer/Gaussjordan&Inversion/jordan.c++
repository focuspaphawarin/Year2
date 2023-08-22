#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
	double a[3][4]={{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};	
	for(k=0;k<2;k++)
    {
		for(i=k+1;i<3;i++)
        {
			double temp=a[i][k];
			for(j=0;j<4;j++)
            {
				a[i][j]=a[i][j]-(a[k][j]/a[k][k]*temp);
			}	
		}
	}
    for(k=2;k>0;k--){
		for(i=k-1;i>=0;i--)
        {
			double temp=a[i][k];
			for(j=3;j>=0;j--)
            {
				a[i][j]=a[i][j]-(a[k][j]/a[k][k]*temp);
                
			}	
		}
	}
	for(i=2;i>=0;i--)
    {
		for(j=3;j>=0;j--)
        {
			a[i][j]=a[i][j]/a[i][i];
		}
	}
    for(i=0;i<3;i++)
    {
        cout <<"x["<<i+1<< "] = "<<a[i][3]<<endl;
    }
    cout << "Matrix a:\n";
    for (i=0;i<3;i++) 
    {
        for (j=0;j<4;j++) 
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}