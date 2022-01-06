#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, m, u, v;
    cout << "Plz enter the number of nodes: ";
    cin >> n;
    cout << "Plz enter the number of edges: ";
    cin >> m;

    vector<int>node[n];

    for(i=1; i<=m; i++)
    {
        cout << "Edge " << i << ": ";
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }

    cout << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Adjacent(s) of node " << i << " : ";
        for(int j = 0; j < node[i].size(); j++)
            cout << node[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
