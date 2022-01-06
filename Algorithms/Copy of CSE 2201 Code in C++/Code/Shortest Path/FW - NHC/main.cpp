#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, e, u, v, w;
    cin >> n >> e;
    int d[n][n], p[n][n];

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
                d[i][j] = 999999;
                p[i][j] = -1;
            }
        }

    for(i=0; i<e; i++)
    {
        cin >> u >> v >> w;
        d[u][v] = w;
        p[u][v] = u;
    }

    for(int k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                if(d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = p[k][j];
                }
            }

    cout << "Distance Matrix\n";
     for(i=0; i<n; i++)
     {
        for(j=0; j<n; j++)
        {
            cout <<setw(3) << d[i][j] << " ";
        }
        cout << endl;
     }

     cout << "Path Matrix\n";
     for(i=0; i<n; i++)
     {
        for(j=0; j<n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
     }

     stack <int> path;
     int s, destination, parent;
     cout << "Source and destination: ";
     cin >> s >> destination;
     path.push(destination);
     parent = p[s][destination];
     while(parent != s)
     {
         path.push(parent);
         parent = p[s][parent];
     }
     path.push(s);

     cout << "Path: ";
     while(!path.empty())
     {
         cout << path.top() << " ";
         path.pop();
     }

    return 0;
}
/*
4 6
0 1 3
0 3 15
1 2 -2
0 2 6
2 3 2
3 0 1
*/
