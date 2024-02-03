#include <iostream>
using namespace std;

// void MaxSub(int arr[],int L,int R)
// {
//     if (L==R)
//     {
//         int mid = (L+R)/2;
//         MaxSub(arr,L,mid);
//         MaxSub(arr,mid,R);
//         Max(arr,L,mid,R);
//     }
// }

// void Max(int arr[],int L,int mid,int R)
// {

// }
int main()
{
    int n,sum=0,max=0;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            sum += A[j];
            if(sum>max)
            {
                max = sum ;
            }
        }
        sum = 0; 
    }
    cout << max;
}