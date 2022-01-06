#include <bits/stdc++.h>

using namespace std;

void printNodes(vector<int>path, int x)
{
    if(x == path[x])
        cout << x << " ";
    if(x != path[x])
    {
        printNodes(path, path[x]);
        cout << x << " ";
    }
    //cout << endl;
}

void dijkstra(int s, int n, vector<pair<int, int> > adj[])
{
    vector<int>dist(n, INT_MAX);
    vector<int>path(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

    //process source vertex
    pq.push(make_pair(0, s));
    dist[s] = 0;
    path[s] = s;

    vector<pair<int, int> > :: iterator i;
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for(i = adj[u].begin(); i != adj[u].end(); i++)
        {
            int v = i -> first;
            int weight = i -> second;

            if(dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                path[v] = u;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << "\nVertex " << i << ": Distance " << dist[i] << ".";
        cout << "\nPath: ";
        printNodes(path, i);
    }
}

int main()
{
    int n, e, u, v, w, i, s;

    cout << "Number of nodes: ";
    cin >> n;
    cout << "Number of edges: ";
    cin >> e;

    vector<pair<int, int> > adj[n];
    //here adj[u] will store information of all adjacent vertex of u
    //pair<int, int> == pair<v, w>
    //cout << "Plz enter values for every edges in following sequences.\n";
    cout << "Source Destination Weight\n";
    for(i=0; i<e; i++)
    {
        cout << "Edges " << i << ": ";
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    cout << "Source vertex: ";
    cin >> s;

    dijkstra(s, n, adj);

    return 0;
}
