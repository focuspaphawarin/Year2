#include<iostream>

using namespace std;

int main()
{
    int i,j,k;
	double a[3][4]={{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
	double x[3];
	
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
	for(i=0;i<3;i++)
    {
		for(j=i;j<4;j++)
        {
			a[i][j]=a[i][j]/a[i][i];
            x[i]=a[i][3]/a[i][i];
            cout << "x["  << i+1 << "] = " << x[i] << endl;
		}
	}
    // for(i=0;i<3;i++)
    // {
    //     cout << "x["  << i+1 << "] = " << x[i] << endl;
    // }
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