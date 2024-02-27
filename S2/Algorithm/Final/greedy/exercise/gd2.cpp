#include <iostream>
using namespace std;


void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b ;
	*b = temp;
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			sum += arr[j];
		}
	}
	cout << 1.0*sum/n;
}