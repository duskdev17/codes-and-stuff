#include <bits/stdc++.h>

using namespace std;

vector<int>selectedEdge;

struct Node{
    int p, r;
};

struct Edge{
    int u, v, w;
};

bool compare(Edge x, Edge y)
{
    return x.w < y.w;
}

void makeSet(struct Node node[], int x)
{
    node[x].p = x;
    node[x].r = 0;
}

int findSet(struct Node node[], int x)
{
    if(node[x].p != x)
        node[x].p = findSet(node, node[x].p);

    return node[x].p;
}

void setUnion(struct Node node[], int x, int y)
{
    if(node[x].r > node[y].r)
        node[y].p = x;
    else
    {
        node[x].p = y;
        if(node[x].r == node[y].r)
            node[y].r++;
    }
}

int kruskal(struct Node node[], struct Edge edge[], int n, int e)
{
    int mstWeight=0;

    for(int i=0; i<n; i++)
        makeSet(node, i);

    sort(edge, edge+e, compare);

    for(int i=0; i<e; i++)
    {
        int x = edge[i].u;
        int y = edge[i].v;
        int x_parent = findSet(node, x);
        int y_parent = findSet(node, y);

        if(x_parent != y_parent)
        {
            setUnion(node, x_parent, y_parent);
            selectedEdge.push_back(i);
            mstWeight += edge[i].w;
        }
    }

    return mstWeight;
}

int main()
{
    int i, u, v, n, e, w;

    cout << "Number of nodes and edges: ";
    cin >> n >> e;


    struct Node node[n];
    struct Edge edge[e];

    cout << "Enter Edge's information in this order: u v w.\n";
    for(i=0; i<e; i++)
    {
        cin >> u >> v >> w;
        edge[i].u = u;
        edge[i].v = v;
        edge[i].w = w;
    }

    cout << kruskal(node, edge, n, e);
    cout << "\nSelected edges are\n";
    for(i=0; i<selectedEdge.size(); i++)
    {
        int x = selectedEdge[i];
        cout << edge[x].u << "-" << edge[x].v << endl;
    }

    return 0;
}
