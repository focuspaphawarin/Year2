#include<iostream>
using namespace std ;

// class MaxHeap
// {
//     public:
//         int arr[100];
//         int heapsize = 0;
//         int lastindex = 1;
//         void Swap(int x,int y)
//         {
//             int temp = 0;
//             temp = arr[x];
//             arr[x] = arr[y];
//             arr[y] = temp;
//         }
//         void InsertMaxHeap(int lastindex)
//         {
//             int parent = lastindex/2;
//             if(lastindex <= 1)
//             {
//                 return;
//             }
//             else if(arr[parent]<arr[lastindex])
//             {
//                 Swap(parent,lastindex);
//                 InsertMaxHeap(parent);
//             }
//             else{return;}
//         }
//         void Insert(int data)
//         {
//             arr[lastindex] = data;
//             InsertMaxHeap(lastindex);
//             lastindex++;
//         }
//         void DeleteMaxHeap(int index)
//         {
//             int child;
//             int left = 2*index;
//             int right = (2*index)+1;
//             if(left<lastindex)
//             {
//                 if(arr[left]>=arr[right])
//                 {
//                     child = left;
//                 }
//                 else{child = right;}
//                 if(arr[index]<arr[child])
//                 {
//                     Swap(index,child);
//                     DeleteMaxHeap(child);
//                 }
                
//             }
//         }
//         void Delete()
//         {
//             cout << arr[1] << endl;
//             arr[1] = arr[lastindex-1];
//             lastindex--;
//             DeleteMaxHeap(1);

//         }
//         void Show()
//         {
//             for(int i=1;i<lastindex;i++)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
// };
// int main()
// {
//     MaxHeap mh ;
//     char c;
//     int value;
//     do
//     {
//         cin >> c;
//         if(c == 'a')
//         {
//             cin >> value ;
//             mh.Insert(value);
//         }
//         else if (c == 'p')
//         {
//             mh.Show();
//         }
//         else if (c == 'd')
//         {
//             mh.Delete();
//         }
//         else{break;}
//     } while (c != 'e');
    
// }


class MinHeap
{
    public:
        int arr[100];
        int index = 1;

        void swap(int x,int y)
        {
            int temp = 0;
            temp = arr[x];
            arr[x] = arr[y];
            arr[y] = temp;
        }
        void InsertMinHeap(int index)
        {
           int parent = index/2; //ตน
           if(index<=1)
           {
            return;
           }
           else
           {
            if(arr[parent]>arr[index])
            {
                swap(parent,index);
                InsertMinHeap(parent);
            }
            return;
           }
        }
        void Insert(int data)
        {
            arr[index] = data;
            InsertMinHeap(index);
            index++;
        }
        void DeleteMinHeap(int i)
        {
            int child;
            int left = i*2;
            int right = i*2+1;
            if(left<index)
            {
                if(arr[left]<=arr[right])
                {
                    child = left;
                }
                else{child = right;}
                if(arr[i]>arr[child])
                {
                    swap(i,child);
                    DeleteMinHeap(child);
                }
            }
        }
        void Delete()
        {
            cout << arr[1] ;
            arr[1] = arr[index-1];
            index--;
            DeleteMinHeap(1);
        }
        void Print()
        {
            for(int i = 1;i<index;i++)
            {
                cout << arr[i] << " ";
            }
        }

};

int main()
{
    MinHeap mh;
    char inp;
    int val;
    do
    {
        cin >> inp;
        if(inp == 'a')
        {
            cin >> val;
            mh.Insert(val);
        }
        else if (inp == 'd')
        {
            mh.Delete();
        }
        else if (inp == 'p')
        {
            mh.Print();
        }
    }while(inp != 'e');
}
