#include <iostream>

using namespace std;

int main()
{
    int i, n, m, u, v;
    cout << "Plz enter the number of nodes: ";
    cin >> n;
    cout << "Plz enter the number of edges: ";
    cin >> m;

    int adj_matrix[n][n];
    for(i=0; i<n; i++)
        for(int j=0; j<n; j++)
            adj_matrix[i][j] = 0;

    for(i=1; i<=m; i++)
    {
        cout << "Edge " << i << "(u, v) : ";
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    cout << endl << "Adjacency Matrix " << endl;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
