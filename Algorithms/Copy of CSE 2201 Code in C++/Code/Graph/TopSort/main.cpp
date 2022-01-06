#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 100
vector <int> adj[MAX];
int visited[MAX];
char color[MAX];
int d[MAX];
int f[MAX];
int time;

void dfs(int at);

int main()
{
    int s, e, n, u, v;
    cout << "Total number of vertices: ";
    cin >> n;
    cout << "Total number of edges: ";
    cin >> e;

    for(int i = 0; i < n; i++)
        color[i] = 'w';

    for(int i = 0; i < e; i++)
    {
        cout << "Edge " << i+1 << ":";
        cin >> u;
        cin >> v;

        adj[u].push_back(v); // for an edge u to v;
        adj[v].push_back(u); // for an edge v to u;
    }

    time = 0;
    for(int i = 0; i < n; i++)
        if(color[i] == 'w')
            dfs(i);

    for(int i = 0; i < n; i++)
        cout << f[i] << " ";

    return 0;
}

void dfs(int at)
{
    time = time + 1;
    d[at] = time;
    color[at] = 'g';

    for(int i = 0; i < adj[at].size(); i++)
    {
        int v = adj[at][i];
        if(color[v] == 'w')
        {
            dfs(v);
        }
    }

    color[at] = 'b';
    time = time + 1;
    f[at] = time;
}

