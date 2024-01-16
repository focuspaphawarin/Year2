#include <iostream>
#include <limits.h>

using namespace std;

int search(int arr[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=m)
        {
            return i;
        }
        return n-1;
    }
}
void search_near(int arr[],int l,int r,int m,int k)
{
    if(l>r||k==0)
    {
        return;
    }
    k-=1;

    int mid = l+(r-l)/2;
    int vl = mid-1 >= 0 ? arr[mid-1] : INT_MIN;
    int vr = mid <= (r-1) ? arr[mid] : INT_MIN;
    cout << mid-1 <<" "<< mid << " = ";
    cout << vl <<" "<< vr << endl;

    if(abs(vl-m)>abs(vr-m))
    {
        return search_near(arr,m+1,r,m,k);
    }
    return search_near(arr,l,m-1,m,k);
}
int main()
{
    int arr[] = {10,12,15,17,18,20,25};
    int m = 8;
    int k = 2;
    int n = 7;
    int i = search(arr,n,m);
    search_near(arr,max(0,i-k),min(n-1,i+k),m,k);
    return 0;
}