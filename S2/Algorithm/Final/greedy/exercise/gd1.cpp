#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b ;
	*b = temp;
}

int partition(int a[],int l,int r)
{
	int pivot,i,j,t;
	pivot = a[1];
	i = 1;
	j = r+1;
	while(1)
	{
		do
		{
			++i;
		}while(a[i]<=pivot);
		do
		{
			--j;
		}while(a[j]>pivot);
		if(i>=j)
		{
			break;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[l],&a[j]);
	return j;
}

void qsort(int s[],int l,int r)
{
	int p;
	if(l<r)
	{
		p = partition(s,l,r);
		qsort(s,l,p-1);
		qsort(s,p+1,r);
	}
}
int Knapsack(int W[],int V[],int n,int w)
{
	int B[n];
	for(int i=0;i<n;i++)
	{
		B[i] = V[i]/W[i];
	}
	qsort(B,0,n);
	for(int i=n-1;i>=0;i--)
	{
		w = w - B[i];
	}
}

int main()
{
	int n,w;
	cin >> n;
	cin >> w;
	int W[n],V[n];
	for(int i=0;i<n;i++)
	{
		cin >> W[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> V[i];
	}
}