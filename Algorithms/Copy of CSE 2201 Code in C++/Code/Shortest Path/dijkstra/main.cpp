#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ipair;
typedef priority_queue <ipair, vector<ipair>, greater<ipair> > min_heap;

void Edge(int u, int v, int w, vector<ipair>adj[])
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void dijkstra(int source, int n, vector<ipair>adj[])
{
    min_heap pq;
    vector<int> dist(n, INT_MAX);

    pq.push(make_pair(0, source));
    dist[source] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        vector<ipair>::iterator i;
        for(i = adj[u].begin(); i!=adj[u].end(); i++)
        {
            int v = i -> first;
            int weight = i -> second;

            if(dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    //cout << "Vertex     Distance from source\n";
    for(int i = 0; i < n; i++)
        cout << "Vertex " << i << ": Distance " << dist[i] << ".\n";
}

int main()
{
    int n, u, v, e, w, s, i;
    cout << "Node number: ";
    cin >> n;
    cout << "Edge number: ";
    cin >> e;
    vector<ipair>adj[n];

    //create edge
    cout << "Enter edge values.\n(Source, Destination, Weight)\n";
    for(i=0; i<e; i++)
    {
        cout << "Edge " << i << ": ";
        cin >> u >> v >> w;
        Edge(u, v, w, adj);
    }

    cout << "Source vertex: ";
    cin >> s;

    dijkstra(s, n, adj);

    return 0;
}
