#include<iostream>
using namespace std ;

class MaxHeap
{
    public:
        int arr[100];
        int heapsize = 0;
        int lastindex = 1;
        void Swap(int x,int y)
        {
            int temp = 0;
            temp = arr[x];
            arr[x] = arr[y];
            arr[y] = temp;
        }
        void InsertMaxHeap(int lastindex)
        {
            int parent = lastindex/2;
            if(lastindex <= 1)
            {
                return;
            }
            else if(arr[parent]<arr[lastindex])
            {
                Swap(parent,lastindex);
                InsertMaxHeap(parent);
            }
            else{return;}
        }
        void Insert(int data)
        {
            arr[lastindex] = data;
            InsertMaxHeap(lastindex);
            lastindex++;
        }
        void DeleteMaxHeap(int index)
        {
            int child;
            int left = 2*index;
            int right = (2*index)+1;
            if(left<lastindex)
            {
                if(arr[left]>=arr[right])
                {
                    child = left;
                }
                else{child = right;}
                if(arr[index]<arr[child])
                {
                    Swap(index,child);
                    DeleteMaxHeap(child);
                }
                
            }
        }
        void Delete()
        {
            cout << arr[1] << endl;
            arr[1] = arr[lastindex-1];
            lastindex--;
            DeleteMaxHeap(1);

        }
        void Show()
        {
            for(int i=1;i<lastindex;i++)
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