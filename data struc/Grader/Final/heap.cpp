#include<iostream>
using namespace std ;

class MaxHeap
{
    public:
        int arr[1000];
        int index = 1;

        void Swap(int x,int y)
        {
            int temp = 0;
            temp = arr[x];
            arr[x] = arr[y];
            arr[y] = temp;
        }

        void InsertMaxHeap(int index)
        {
            int parent = index/2;
            if(index <= 1)
            {
                return;
            }
            else if(arr[parent]<arr[index])
            {
                Swap(parent,index);
                InsertMaxHeap(parent);
            }
            else{return;}
        }

        void Insert(int data)
        {
            arr[index] = data;
            InsertMaxHeap(index);
            index++;
        }

        void DeleteMaxHeap(int index)
        {
            int child;
            if(arr[2*index]>arr[(2*index)+1])
            {
                child = 2*index;
            }
            else{child = (2*index)+1;}
            if(arr[index]<arr[child])
            {
                Swap(index,child);
                DeleteMaxHeap(child);
            }
            else{return;}
        }

        void Delete()
        {
            cout << arr[1] << endl;
            arr[1] = arr[index-1];
            index--;
            DeleteMaxHeap(1);

        }

        void Show()
        {
            for(int i=1;i<index;i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }



};
int main()
{
    MaxHeap mh ;
    char c;
    int value;
    do
    {
        cin >> c;
        if(c == 'a')
        {
            cin >> value ;
            mh.Insert(value);
        }
        else if (c == 'p')
        {
            mh.Show();
        }
        else if (c == 'd')
        {
            mh.Delete();
        }
        else{break;}
    } while (c != 'e');
    
}