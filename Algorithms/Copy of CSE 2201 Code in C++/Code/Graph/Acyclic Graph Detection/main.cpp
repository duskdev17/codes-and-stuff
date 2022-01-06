#include <bits/stdc++.h>

using namespace std;
int t;
int isCyclic;

void dfs(vector<int>adj[], int visited[], int d[], int f[], int i)
{
    d[i] = ++t;
    visited[i] = 1;
    for(int j = 0; j < adj[i].size(); j++)
    {
        int v = adj[i][j];
        if(visited[v] == 0)
            dfs(adj, visited, d, f, v);
        else if(visited[v] == 1)
            isCyclic = 1;
    }

    f[i] = ++t;
    visited[i] = 2;
    cout << i <<" ";
}

int main()
{
    int i, n, e, u, v;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> e;
    vector <int> adj[n];
    cout << "Enter each edge's information\n";
    for(i=0; i<e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int visited[n];// in_stack[n];
    int d[n], f[n];
    fill_n(visited, n, 0);
    //fill_n(in_stack, n, 0);

    cout << "DFS: ";
    for(i=0; i<n; i++)
    {
        if(visited[i] == 0)
            dfs(adj, visited, d, f, i);
    }

    if(isCyclic)
        cout << "\nCyclic Graph!";

    return 0;
}
