// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// void BFS(int graph[][100], int startVertex, bool visited[], int n) 
// {
//     queue<int> queue;
//     queue.push(startVertex);
//     visited[startVertex] = true;

//     while(!queue.empty()) 
//     {
//         int currentVertex = queue.front();
//         queue.pop();

//         for(int i = 0; i < n; i++) 
//         {
//             if(graph[currentVertex][i] && !visited[i]) 
//             {
//                 queue.push(i);
//                 visited[i] = true;
//             }
//         }
//     }
// }
// int main() 
// {
//     int graph[100][100] = {0}; 
//     bool visited[100] = {false};
//     int n, v = -1, k;
//     cin >> n;
//     for(int i = 0; i < n; i++) 
//     {
//         while(v!=0) 
//         {
//             cin >> v;
//             if(v!=0)
//             {
//                 graph[i][v] = 1;
//             }
//         }
//         v = -1;
//     }
//     cin >> k;
//     int vertex;
//     for(int i=0;i<k;i++)
//     {
//         cin >> vertex;
//         for (int i=0;i<n;i++) 
//         {
//             visited[i] = false;
//         }
//         BFS(graph, vertex, visited, n);
//         for (int i=0;i<n;i++) 
//         {
//             if (visited[i]==false) 
//             {
//                 cout << i+1 << " ";
//             }
//         }
//     }
//     cout << endl;
//     return 0;
// }




#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int graph[][100], int startVertex, bool visited[], int n)
{
    queue<int> queue;
    queue.push(startVertex);
    visited[startVertex] = true;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        queue.pop();

        for (int i = 0; i < n; i++)
        {
            if (graph[currentVertex][i] != 0 && !visited[i])
            {
                queue.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
    // 3 1 2 0 2 2 0 3 1 2 0 2 1 2
    int graph[100][100] = {0};
    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++)
            graph[i][j] = 0;

    bool visited[100];
    int n, v = -1, k, curr_idx;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr_idx;
        cin >> v;
        while (v != 0)
        {
            graph[curr_idx - 1][v - 1] = 1;
            cin >> v;
        }
    }

    cin >> k;
    int vertex;
    for (int i = 0; i < k; i++)
    {
        cin >> vertex;
        for (int i = 0; i < n; i++)
        {
            visited[i] = false;
        }

        BFS(graph, vertex - 1, visited, n);
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false && i != vertex - 1)
            {
                cout << (i + 1) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}