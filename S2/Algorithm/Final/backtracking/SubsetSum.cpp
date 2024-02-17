#include<stdio.h>

int A[] = {25,10,9,2};
int k = 36;

void print_sol(int x[],int n)
{
	int temp = 0;
	for(int i=1;i<=n;i++)
	{
		if(x[i] == 1)
		{
			temp += A[i-1];
		}
		if(temp == k)
		{
			for(int j=1;i<=n;j++)
			{
				if (x[j] == 1)
				{
					printf("%d ",x[j-1]);
				}
			}
			printf("\n");	
		}
	}
}

void subset1(int x[],int l,int r)
{
	if (l == r)
	{
		print_sol(x,r);
		
	}
	else
	{
		x[l+1] = 1;
		subset1(x,l+1,r);
		x[l+1] = 0;
		subset1(x,l+1,r);	
	}
}

int main()
{
	int n = 4;
	int x[n+1];
	// subset1(x,0,n);
	return 0;
}
