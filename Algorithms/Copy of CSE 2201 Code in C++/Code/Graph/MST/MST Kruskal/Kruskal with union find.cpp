#include <bits/stdc++.h>

using namespace std;

#define mx 100
typedef pair<int, int> iPair;

int parent[mx];
int vrank[mx];

vector < pair < int, iPair > > edge;


void makeSet(int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i] = i;
        vrank[i] = 0;
    }
}

int parentFinder(int x)
{
    if(x != parent[x])
        return parent[x] = parentFinder(parent[x]);
    else
        return x;
}

int setUnion(int x, int y)
{
    int px = parentFinder(x); //parent of x
    int py = parentFinder(y);

    if(px == py)
        return 0;

    if(vrank[px] > vrank[py])
        parent[py] = px;
    else if(vrank[px] < vrank[py])
        parent[px] = py;
    else
    {
        vrank[px]++;
        parent[py] = px;
    }

    return 1;
}

int kruskal(int n, int e)
{
    int minWeight=0, u, v, weight;
    sort(edge.begin(), edge.end());
    makeSet(n);
    cout << "Selected edges are: \n";

    vector<pair<int, iPair> > :: iterator it;
    for(it=edge.begin(); it!=edge.end(); it++)
    {
        weight = it->first;
        u = it->second.first;
        v = it->second.second;

        if(setUnion(u, v))
        {
            cout << u << " " << v << endl;
            minWeight += weight;
        }
    }
    return minWeight;
}

int main()
{
    int n, e, u, v, w;

    cout << "How many nodes: ";
    cin >> n;
    cout << "How many edges: ";
    cin >> e;

    for(int i=0; i<e; i++)
    {
        cout << "Edge " << i+1 << " (u v w): ";
        cin >> u >> v >> w;
        edge.push_back({w, {u, v}});
    }

    int cst = kruskal(n, e);
    cout << "MST Weight = " << cst;

    return 0;
}
