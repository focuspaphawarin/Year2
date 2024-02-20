#include<iostream>
using namespace std;

int cut_list[1000];
int n,L,min_no = 10000;
int flag = 0;

void backtracking(int total,int count)
{
    if(total == L)
    {
        if(count<min_no)
        {
            flag = 1;
            min_no = count;
        }
        return;
    }
    if(total>L||count>=min_no)
    {
        return ;
    }
    for(int i=0;i<n;i++)
    {
        backtracking(total+cut_list[i],count+1);
    }
    
}

int main()
{
    cin >> L;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> cut_list[i];
    }
    backtracking(0,0);
    if(flag==0)
    {
        min_no = -1;
    }
    cout << min_no;
}