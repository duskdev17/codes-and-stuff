#include <bits/stdc++.h>

using namespace std;

#define INF 999999

struct Node
{
    int key, p, number;
    vector<pair<int, int> >adj;
    bool inMST;

    bool operator<(const Node &rhs) const
    {
        return key > rhs.key; //this will convert it into min heap. if we use < then it will become max heap
    }
};

int main()
{
    int i, u, v, n, e, w, r, mstWeight=0;

    cout << "Number of nodes and edges: ";
    cin >> n >> e;

    struct Node node[n];

    cout << "Enter edge information (u v w)\n";
    for(i=0; i<e; i++)
    {
        cin >> u >> v >> w;
        node[u].adj.push_back(make_pair(v, w));
        node[v].adj.push_back({u, w});
    }

    //initialization
    for(i=0; i<n; i++)
    {
        node[i].key = INF;
        node[i].p = -1;
        node[i].number = i;
        node[i].inMST = false;
    }

    cout << "Enter source vertex: ";
    cin >> r;
    node[r].key = 0;

    priority_queue <Node> pq;

    pq.push(node[r]);

    cout << "Selected edges\n";
    while(!pq.empty())
    {
        int u = pq.top().number;
        pq.pop();

        if(node[u].inMST == false)
        {
            node[u].inMST = true;
            mstWeight += node[u].key;
            if(node[u].p != -1)
            {
                cout << node[u].p << "-" << node[u].number << endl;
            }

            for(int i=0; i<node[u].adj.size(); i++)
            {
                v = node[u].adj[i].first;
                w = node[u].adj[i].second;

                if((node[v].inMST == false) && (w < node[v].key))
                {
                    node[v].key = w;
                    node[v].p = node[u].number;
                    pq.push(node[v]);
                }
            }
        }

    }

    cout << "MST = " << mstWeight;

}

/*
0 3 3
0 1 5
0 2 4
1 3 2
2 3 1

0 4 4
0 1 1
1 4 3
1 2 2
2 4 7
2 5 5
2 3 6
3 4 4
3 5 6
 */
