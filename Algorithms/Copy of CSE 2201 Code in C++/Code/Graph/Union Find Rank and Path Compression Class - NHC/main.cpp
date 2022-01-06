#include <bits/stdc++.h>

using namespace std;

struct vertex{
    int p, r;
    //vector<int>adj;
};

void makeSet(struct vertex node[], int x)
{
    node[x].p = x;
    node[x].r = 0;
}

int findSet(struct vertex node[], int x)
{
    if(node[x].p != x)
        node[x].p = findSet(node, node[x].p);

    return node[x].p;
}

void link(struct vertex node[], int x, int y)
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

void setUnion(struct vertex node[], int x, int y)
{
    int x_parent = findSet(node, x);
    int y_parent = findSet(node, y);

    if(x_parent != y_parent)
        link(node, x_parent, y_parent);
}

int main()
{
    int i, u, v, n, e;

    cout << "Number of nodes and edges: ";
    cin >> n >> e;


    struct vertex node[n];

    for(i=0; i<n; i++)
        makeSet(node, i);

    //considering all edges
    for(i=0; i<e; i++)
    {
        cin >> u >> v;
        setUnion(node, u, v);
    }

    for(i=0; i<n; i++)
    {
        cout << "Vertex[" << i << "].p = " << node[i].p <<" Vertex[" << i << "].r = " << node[i].r << endl;
    }

    return 0;
}
