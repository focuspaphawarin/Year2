// #include<iostream>
// using namespace std;

// void print_sol(int x[],int n)
// {
//     int w_temp = 0,v_temp = 0;
//     for(int i=1;i<=n;i++)
//     {
//         if(x[i] == 1)
//         {
//             w_temp += W[i-1];
//             v_temp += V[i-1];
//         }
//     }
//     if(w_temp<=k && v_temp>max_v)
//     {
//         max_v=v_temp;
//         for(int j=1;j<=n;j++)
//         {
//             ans[j] = x[j];
//             cout << ans[j] << endl;
//         }
//     }
// }

// void Subset1(int x[],int l,int r)
// {
//     if(l==r)
//     {
//         print_sol(x,r);
//     }
//     else
//     {
//         x[l+1]=1;
//         Subset1(x,l+1,r);
//         x[l+1]=0;
//         Subset1(x,l+1,r);
//     }

// }

// int main()
// {
//     int V[] = {12,5,4,2};
//     int W[] = {8,7,4,2};
//     int max_v = -1;
//     int ans[4];
//     int k = 18;
//     Subset1()
// }


#include<iostream>
using namespace std;

int V[] = {12,5,4,2};
int W[] = {8,7,4,2};
int max_v = -1;
int ans[4];
int k = 18;

void print_sol(int x[], int n) 
{
    int w_temp = 0, v_temp = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (x[i] == 1) 
        {
            w_temp += W[i - 1];
            v_temp += V[i - 1];
        }
    }
    if (w_temp <= k && v_temp > max_v) 
    {
        max_v = v_temp;
        for (int j = 1; j <= n; j++) 
        {
            ans[j] = x[j];
        }
    }
}

void Subset1(int x[], int l, int r, int cur_weight, int cur_value) 
{
    if (l == r) {
        print_sol(x, r);
    } 
    else 
    {
        if (cur_weight + W[l] <= k) 
        {
            x[l+1] = 1;
            // cout <<"value : " <<cur_weight<< endl;
            Subset1(x, l+1, r, cur_weight + W[l], cur_value + V[l]);
            x[l+1] = 0;
            Subset1(x, l+1, r, cur_weight, cur_value);
        }
        else{return;}
    }
}

int main() {
    int n = sizeof(V) / sizeof(V[0]); 
    int x[100] = {0}; 
    Subset1(x, 0, n, 0, 0);

    cout << "Items selected: ";
    for (int i = 1; i <= n; i++) 
    {
        if (ans[i] == 1) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Total value: " << max_v << endl;

    return 0;
}
