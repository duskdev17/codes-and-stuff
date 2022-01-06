#include <bits/stdc++.h>
using namespace std;
#define mx 100

int parent[mx];
int vertexRank[mx];

void makeSet(int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i] = i;
        vertexRank[i] = 0;
    }
}

int findSet(int x)
{
    if(x != parent[x])
        return parent[x] = findSet(parent[x]);
    else
        return x;
}

int setUnion(int x, int y)
{
    int px = findSet(x); //parent of x
    int py = findSet(y);

    if(px == py)
        return 0;

    if(vertexRank[px] > vertexRank[py])
        parent[py] = px;
    else if(vertexRank[px] < vertexRank[py])
        parent[px] = py;
    else
    {
        vertexRank[px]++;
        parent[py] = px;
    }

    return 1;
}

void print(int n)
{
    cout << "\nRank and Parent of all vertices are given below.\n";
    for(int i=0; i<n; i++)
    {
        cout << "Vertex " << i << ": Parent " << parent[i] << ", Rank " << vertexRank[i];
        cout << endl;
    }
}

int main()
{
    int n, e, u, v;

    cout << "How many nodes: ";
    cin >> n;
    cout << "Number of union operation: ";
    cin >> e;

    makeSet(n);

    for(int i=1; i<=e; i++)
    {
        cout << "Union operation " << i << ": ";
        cin >> u >> v;
        //setUnion(u, v)
        if(setUnion(u, v) == 0)
            cout << "Not possible. Both belongs to same group.\n";
        else
            cout << "Union performed.\n";
    }

    cout << endl;
    print(n);

    return 0;
}
