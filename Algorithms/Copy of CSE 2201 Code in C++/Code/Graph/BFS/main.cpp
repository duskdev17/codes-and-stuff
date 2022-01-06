#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 10

vector <int> adj[MAX];
//this is an array of vector. Which will store adj for each vertex
//adj[0] will hold vertex(s) that are adj to v0.
//adj[0] [][][] as it is vector we can easily add
int visited[MAX];
//this will denote either vertex is visited or not
//0 if not visited, 1 is visited

void bfs(int s, int n);
//s is starting node and n is total number of nodes

int main()
{
    int s, e, n, u, v;

    cout << "Total number of vertices: ";
    cin >> n;
    cout << "Total number of edges: ";
    cin >> e;
    //cout << "Vertices for each edges.\n";

    for(int i = 0; i < e; i++)
    {
        cout << "Edge " << i+1 << ":";
        cout << "\nu : ";
        cin >> u;
        cout << "v : ";
        cin >> v;

        adj[u].push_back(v); // for an edge u to v;
        adj[v].push_back(u); // for an edge v to u;
    }
    cout << "Source node: ";
    cin >> s;

    bfs(s, n);

    return 0;
}

void bfs(int s, int n)
{
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    //vector <int> adj[MAX](10);

    queue <int> Q;

    Q.push(s);
    visited[s] = 1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        cout << u << " ";

        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(visited[v] == 0)
            {
                visited[v] = 1;
                Q.push(v);
            }
        }
    }
}

