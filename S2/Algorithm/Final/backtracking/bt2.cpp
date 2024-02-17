#include<iostream>
#include<cstdlib>
using namespace std ;

int n=4,x[4];
int flag = 0;

void backtracking(int k)
{
	// for(int j=0;j<k;j++)
	// {
	// 	if(abs(j-k) == abs(x[j]-x[k])||(x[j] == x[k]))
	// 	{
	// 		flag = 1;
	// 	}
	// }
	for(int j=1;j<=k;j++)
	{
		for(int p=1;p<j;p++)
		{
			if(abs(p-j) == abs(x[p]-x[j])||(x[j] == x[p]))
			{
				flag = 1;
			}
		}
	}
}

void n_queens(int k)
{
	if(k == n)
	{
		if (flag == 0)
		{
			for(int i=1;i<=k;i++)
			{
				cout << x[i];
			}
			cout << endl;
			return;
		}
	}
	else
	{
		for (int row=0;row<n;row++)
		{
			x[k]=row;
			backtracking(k);
			if(flag == 0)
			{
				n_queens(k+1);
			}
		}
	}
}

int main()
{
	n_queens(0);
	return 0;
}
