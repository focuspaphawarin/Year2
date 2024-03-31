#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permute(int x[],int start,int end)
{
	if (start == end)
	{
		int p ,q;
		for(int i=1;i<=end;i++)
		{
			if(x[i] == 2)
			{
				p = i;
			}
			if(x[i] == 3)
			{
				q = i;
			}
		}
		if(abs(p-q)>1)
		{
			for (int j=1;j<=end;j++)
			{
				printf("%d ",x[j]);
			}
			printf("\n");
		}
		return;
	}
	for(int i=start;i<=end;i++)
	{
		swap(&x[start],&x[i]);
		permute(x,start+1,end);
		swap(&x[start],&x[i]);
	}
}

int main()
{
	int n = 3;
	int x[] = {-1,1,2,3};
	
	permute(x,1,n);
	
	return 0;
}
