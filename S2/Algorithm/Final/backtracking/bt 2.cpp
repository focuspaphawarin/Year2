#include<iostream>
#include<cstdlib>
using namespace std ;

int n=4,x[4];

void n_queens(int k)
{
	int flag = 0;
	if(k == n)
	{		
		if (flag == 0)
		{
			for(int i=0;i<k;i++)
			{
				cout << x[i];
			}
			cout << endl;
		}
	}
	else
	{
		for (int row=0;row<n;row++)
		{
			x[k]=row;
			for(int j=0;j<k;j++)
			{
				if(abs(j-k) == abs(x[j]-x[k])||(x[j] == x[k]))
				{
					flag = 1;
				}
			}
			if(flag == 1) 
			{
				continue;
			}
			n_queens(k+1);
			
		}
	}
}

int main()
{
	n_queens(0);
	return 0;
}
