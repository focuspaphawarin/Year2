#include<iostream>
using namespace std;

void MaxSub(int arr[],int L,int R)
{
    int maxL , maxR , maxLR ; 
    if(L<R)
    {
        int mid = (L+R)/2;
        maxL = MaxSub(arr,L,mid);
        maxR = MaxSub(arr,mid+1,R);
        for (int i=R;i>=0;i--)
        {
        }
        for (int i=L;i<0;i++)
        {
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ML , MR , MLR , L , R , mid;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout << arr[i];
    // }
}