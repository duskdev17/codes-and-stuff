#include <bits/stdc++.h>

using namespace std;

#define INF 999999

typedef pair<int, int> iPair;


int main()
{
    //Graph information
    int n, m, u, v, w, tw=0;

    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;
    vector <pair <int, int> > adj[n];  //<v w>

    //Creating "adjacent list" with weight
    for(int i=1; i<=m; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    priority_queue <iPair, vector<iPair>, greater<iPair> > pq;
    vector <int> parent(n, -1);
    vector <int> key(n, INF);
    vector <bool> inMST(n, false);

    int r=0;
    //cout << "Enter source vertex: ";
    //cin >> r;

    //parent[r] = r;
    key[r] = 0;

    pq.push({0, r});

    while(!pq.empty())
    {
        u = pq.top().second;
        pq.pop();
        //if(inMST[u] == true)
            //continue;
        inMST[u] = true;
        //cout << "Vertex = " << u << "Weight = " << key[u] << endl;

        vector <pair <int, int> > :: iterator it;
        for(it=adj[u].begin(); it!=adj[u].end(); it++)
        {
            v = (*it).first;
            w = (*it).second;

            if(inMST[v] == false && w < key[v])
            {
                key[v] = w;
                pq.push({w, v});
                parent[v] = u;
            }
        }
    }

    for(int i = 1; i < n; i++)
    {
        printf("%d - %d\n", parent[i], i);
        tw = tw + key[u];
    }

    cout << "\nMST Weight = " << tw;


    return 0;
}
 /*
0 3 3
0 1 5
0 2 4
1 3 2
2 3 1
 */
