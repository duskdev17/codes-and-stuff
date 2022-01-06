#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int scc;

void dfs(vector<int> adj[], int visited[], int i)
{
    visited[i] = 1;
    for(int j=0; j<adj[i].size(); j++)
    {
        int v = adj[i][j];
        if(visited[v] == 0)
            dfs(adj, visited, v);
    }

    visited[i] = 2;
    stk.push(i);
}

void Tdfs(vector<int>Tadj[], int visited[], int i)
{
    visited[i] = 1;
    for(int j=0; j<Tadj[i].size(); j++)
    {
        int v = Tadj[i][j];
        if(visited[v] == 0)
            Tdfs(Tadj, visited, v);
    }

    cout << i << " ";
}

int main()
{
    int i, n, e, u, v;
    cout << "Number of nodes and edges: ";
    cin >> n >> e;

    vector<int>adj[n];
    vector<int>Tadj[n];

    for(i=0; i<e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        Tadj[v].push_back(u);
    }

    int visited[n];
    fill_n(visited, n, 0);
    for(i=0; i<n; i++)
        if(visited[i] == 0)
            dfs(adj, visited, i);

    fill_n(visited, n, 0);
    while(!stk.empty())
    {
        int u = stk.top();
        stk.pop();
        if(visited[u] == 0)
        {
            cout << "SCC " << ++scc << ": ";
            Tdfs(Tadj, visited, u);
            cout << endl;
        }
    }

    return 0;
}
