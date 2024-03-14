#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(int graph[][100], int startVertex, bool visited[], int parent[], int n) 
{
    queue<int> queue;
    queue.push(startVertex);
    visited[startVertex] = true;
    parent[startVertex] = -1; 

    while(!queue.empty()) 
    {
        int currentVertex = queue.front();
        queue.pop();

        for(int i = 0; i < n; i++) 
        {
            if(graph[currentVertex][i] && !visited[i]) 
            {
                queue.push(i);
                visited[i] = true;
                parent[i] = currentVertex; 
            }
        }
    }
}

void ShortestPath(int parent[], int s, int d, int n) 
{
    vector<int> path;
    int current = d;
    while(current != -1) 
    {
        path.push_back(current);
        current = parent[current];
    }
    int shortestEdgeCount = path.size() - 1; 
    cout << path.size()-1 << endl;
}

int main() 
{
    int graph[100][100] = {0}; 
    bool visited[100] = {false};
    int parent[100];
    int n, v = 0, s, d;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        while(v!=-1) 
        {
            cin >> v;
            if(v!=-1)
            {
                graph[i][v] = 1;
            }
        }
        v = 0;
    }
    cin >> s;
    cin >> d;
    BFS(graph, s, visited, parent, n);
    ShortestPath(parent, s, d, n);
    return 0;
}
