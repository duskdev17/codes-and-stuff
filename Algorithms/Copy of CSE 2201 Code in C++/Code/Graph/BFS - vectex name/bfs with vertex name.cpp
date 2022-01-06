#include<bits/stdc++.h>

using namespace std;

int index_finder(char vertex[], char value, int n)
{
    for(int i = 0; i < n; i++)
        if(value == vertex[i])
            return i;
}

void bfs(queue<int>Q, vector<int>adj[], char vertex_name[], int n, int visited[])
{
    int u, v, i, j;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(i=0; i<adj[u].size(); i++)
        {
            v = adj[u][i];
            if(visited[v] == 0)
            {
                Q.push(v);
                visited[v] = 1;
            }
        }
        cout << vertex_name[u] << " ";
    }
}

int main()
{
    int n, e, u_i, v_i, i;
    /* n = number of vertices
    e = number of edges
    u_i = index of u
    v_i = index of v */
    char u, v;

    cout << "How many vetices? ";
    cin >> n;
    char vertex_name[n];
    int visited[n];
    cout << "Enter all vertices name\n";
    for(i = 0; i < n; i++)
    {
        cout << "Vertex " << i+1 << ": ";
        cin >> vertex_name[i];
        visited[i] = 0;
    }

    //cout << index_finder(vertex_name, 'a', n);
    cout << "How many edges: ";
    cin >> e;
    vector<int>adj[n];
    for(i=0; i<e; i++)
    {
        cout << "Edge " << i+1 << ": ";
        cin >> u >> v;
        //converting character to integer index
        u_i = index_finder(vertex_name, u, n);
        v_i = index_finder(vertex_name, v, n);
        //creating adjacency list
        adj[u_i].push_back(v_i);
        adj[v_i].push_back(u_i);
    }

    //adjacency list print
    cout << "Adjacency List Representation.\n";
    for(i=0; i<n; i++)
    {
        cout << "Vertex " << vertex_name[i] << ": ";
        for(int j=0; j<adj[i].size(); j++)
            cout << vertex_name[adj[i][j]] << " ";
        cout << endl;
    }

    //BFS
    char s;
    int s_i;
    cout << "Enter source vertex: ";
    cin >> s;
    s_i = index_finder(vertex_name, s, n);
    cout << "\nBFS: ";
    queue<int>Q;
    Q.push(s_i);
    visited[s_i] = 1;
    bfs(Q, adj, vertex_name, n, visited);

    return 0;
}



