#include <bits/stdc++.h>

using namespace std;

int is_in_Stack[100], isCycle=0, cComponent=0;

void dfs(vector<int>adj[], int u, int visited[])
{
    if(visited[u] == 1)
    {
        //is_in_Stack[u] = 0;
        return;
    }

    visited[u] = 1;
    is_in_Stack[u] = 1;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v =  adj[u][i];

        //cycle detection
        if(is_in_Stack[v] == 1)
            isCycle = 1;
        //end of cycle detection
        if(visited[v] == 0)
            dfs(adj, v, visited);
    }

    cout << u << " ";
    is_in_Stack[u] = 0;

}

int main()
{
    int n, e, u, v;

    cout << "Number of nodes and edges: ";
    cin >> n >> e;

    vector <int> adj[n];
    int visited[n];
    for(int i=0; i<n; i++)
    {
        visited[i] = 0;
    }

    //adjacency list creation
    for(int i=0; i<e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    //make sure that each vertex must be in list
    cout << "DFS: ";
    for(int i=0; i<n; i++)
    {
        if(visited[i] == 0)
        {
            cComponent++;
            dfs(adj, i, visited);
        }

    }

    if(isCycle)
        cout << "\nYes";
    else
    {
        cout << "\nNo";
        cout << "\nYes";
    }

    if(cComponent==1)
        cout << "\nYes";
    else
    {
        cout << "\nNo";
        cout << "\n" << cComponent;
    }


    return 0;
}

/*
5 5
0 1
1 2
3 1
3 2
3 4
*/
