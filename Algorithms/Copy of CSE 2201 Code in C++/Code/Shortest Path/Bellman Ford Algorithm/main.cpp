#include <bits/stdc++.h>
#define INF 999999
using namespace std;

class Node{
public:
    int key, p;
};

class Edge{
public:
    int u, v, w;
};

int main()
{
    int n, e, u, v, w, i, s;
    cin >> n >> e;
    Node node[n];
    Edge edge[e];

    for(i=0; i<e; i++)
        cin >> edge[i].u >> edge[i].v >> edge[i].w;

    //initialization
    for(i=0; i<n; i++)
    {
        node[i].key = INF;
        node[i].p = -1;
    }
    cin >> s;
    node[s].key = 0;

    for(i=0; i<n-1; i++)
        for(int j=0; j<e; j++)
        {
            u = edge[j].u;
            v = edge[j].v;
            w = edge[j].w;
            if(node[v].key > node[u].key + w)
            {
                node[v].key = node[u].key + w;
                node[v].p = u;
            }
        }

    cout << "Shortest weight: ";
    for(i=0; i<n; i++)
        cout << node[i].key << " ";

    return 0;
}

/*
5 10
0 1 6
0 2 7
1 2 8
1 3 5
3 1 -2
2 4 9
4 0 2
1 4 -4
2 3 -3
3 4 7
*/
