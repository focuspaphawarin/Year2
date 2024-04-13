#include <iostream>

using namespace std;

struct result
{
    int c;
    int ans;
};
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void s_t(int a[], int i, int j, int k)
{
    if (a[i] > a[j])
        swap(a, i, j);
    if (a[j] > a[k])
        swap(a, j, k);
    if (a[i] > a[j])
        swap(a, i, j);
}
int pt(int A[], int l, int r)
{
    int m = (l + r) / 2;
    s_t(A, l, m, r);
    swap(A, m, r);

    int x = A[r], i = l;
    for (int j=l;j<=r-1;j++)
    {
        if (A[j] <= x)
        {
            swap(A,i,j);
            i++;
        }
    }
    swap(A,i,r);
    return i;
}
struct result quick_select(int A[], int low, int high, int k, struct result pp)
{
    struct result r;
    r.c = pp.c;

    if (low == high)
    {
        r.ans = A[low];
        return r;
    }

    r.c += 1;
    int p = pt(A, low, high);

    int l_len = p - low;
    if (k == l_len + 1)
    {
        r.ans = A[p];
        return r;
    }
    else if (k <= l_len)
    {
        return quick_select(A, low, p - 1, k, r);
    }
    else
    {
        k = k - (l_len+1);
        return quick_select(A, p + 1, high, k, r);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int A[n];
    for (int i=0;i<n;i++)
    {
        cin >> A[i];
    }

    struct result r;
    r.c = 0;
    r = quick_select(A,0,n-1,k,r);
    cout << r.ans;
    cout << " ";
    cout << r.c ;
    
}