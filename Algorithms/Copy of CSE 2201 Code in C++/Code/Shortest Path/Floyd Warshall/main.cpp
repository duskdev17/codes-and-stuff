#include <bits/stdc++.h>

using namespace std;

#define INF 999;

void path(vector<vector<int> > p, int i, int j)
{
    if(p[i][j] == -1)
    {
        cout << "No path.";
        return;
    }
    if(p[i][j] == i)
        cout << i << " ";
    if(p[i][j] != i)
    {
        path(p, i, p[i][j]);
        cout << p[i][j] << " ";
    }

}

int Distance(vector<vector<int> > d, int i, int j)
{
    return d[i][j];
}

int main()
{
    int n, e, u, v, w, i, j, k;

    //Graph information
    cout << "How many nodes: ";
    cin >> n;
    cout << "How many edges: ";
    cin >> e;

    vector<vector<int> > d(n, vector<int> (n));
    vector<vector<int> > p(n, vector<int> (n));

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            {
                if(i == j)
                {
                    d[i][j] = 0;
                    p[i][j] = i;
                }
                else
                {
                    d[i][j] = INF;
                    p[i][j] = -1;
                }
            }

    //initialization with edge information
    cout << "Edge information(u, v, w)\n";
    for(i=0; i<e; i++)
    {
        //cout << "Edge " << i << ": ";
        cin >> u >> v >> w;
        d[u][v] = w;
        p[u][v] = u;
    }

    //Floyd Warshall Algorithm
    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                if(d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = p[k][j];
                }
            }

    //print result
    cout << endl << "Distance matrix: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << setw(3) << d[i][j];
        }
        cout << endl;
    }

    cout << endl << "Path matrix: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << setw(3) << p[i][j];
        }
        cout << endl;
    }

    int x = 0, y = 3;
    cout << "Distance between " << x << " and " << y << ": " << d[x][y] << endl;
    cout << "Path: ";
    path(p, x, y);
    cout << y;

    return 0;
}

/*
0 3 15
0 1 3
0 2 6
3 0 1
1 2 -2
2 3 2
*/
