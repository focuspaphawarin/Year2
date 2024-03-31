#include <iostream>
#include <iomanip>
using namespace std;

void swap(double *a,double *b)
{
	double temp;
	temp = *a;
	*a = *b ;
	*b = temp;
}

void sort(double arr[],double W[],double V[],int ind[],int n)
{
	for(int i=0;i<n;i++)
	{
		ind[i] = i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swap(W[j],W[j+1]);
				swap(V[j],V[j+1]);
				swap(ind[j],ind[j+1]);
			}
		}
	}
}

double Knapsack(double W[],double V[],int n,int w)
{
	int max=0;
	int ind[n];
	double val=0.0;
	double D[n],ans[n],Dr[n];
	for(int i=0;i<n;i++)
	{
		D[i] = V[i]/W[i];
		ans[i] = 0;
	}
	sort(D,W,V,ind,n);
	for(int i=0;i<n;i++)
	{
		int ori = ind[i];
		if(W[i]+max<=w)
		{
			ans[ori] = 1;
			max += W[i];
			val += V[i]; 
		}
		else
		{
			if(max<w)
			{
				ans[ori] = (w-max)/W[i];
				max += W[i];
				val += V[i]*ans[ori];
			}
		}
	}
	// return ans,val;
	for(int i=0;i<n;i++)
	{
		cout << fixed << setprecision(2);
		cout << ans[i] << " ";
	}
	cout << endl;
	cout << val;
}

int main()
{
	int n,w;
	cin >> n;
	cin >> w;
	double W[n],V[n];
	for(int i=0;i<n;i++)
	{
		cin >> W[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> V[i];
	}
	Knapsack(W,V,n,w);
}

// 4 25
// 18 15 10 5
// 25 24 5 8

// 3 5
// 1 2 3
// 1 2 2