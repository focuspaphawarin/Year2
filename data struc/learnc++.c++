#include<iostream>
using namespace std ;

int main()
{
    int x=0 , i , j , array[5] ;
    for (i=0;i<5;i++)
    {
        cin >> array[i];
    }
    for (i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(array[i]>array[j])
            {
                x = array[i];
                array[i]=array[j];
                array[j]=x;
            }
        }
    }
    // for (i=0;i<5;i++)
    // {
    //     cout << array[i] ;
    // }
    cout << array[0] <<endl;
    cout << array[2] <<endl;
    cout << array[4] <<endl;
}