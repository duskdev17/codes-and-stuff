#include<bits/stdc++.h>

using namespace std;

int knapsack(vector<vector<int> > v, int weight[], int value[], int n, int i, int w)
{
    if(i == 0 || w == 0)
        return 0;

    if(v[i][w] != -1)
        return v[i][w];

    int temp, take, leave;
    if(weight[i] > w)
        return knapsack(v, weight, value, n, i-1, w);
    else
    {
        leave = knapsack(v, weight, value, n, i-1, w);
        take = knapsack(v, weight, value, n, i-1, w-weight[i]) + value[i];
    }

    v[i][w] = max(take, leave);
    return v[i][w];
}

int main()
{
    int n, i, j, w, W, take, leave;

    cout << "Enter the maximum weight of knapsack: ";
    cin >> W;
    cout << "How many items: ";
    cin >> n;

    int value[n+1], weight[n+1];
    value[0] = 0, weight[0] = 0;
    for(i=1; i<=n; i++)
    {
        cout << "Enter weight and value for item " << i << ": ";
        cin >> weight[i] >> value[i];
    }

    vector<vector<int> > v(n+1, vector<int> (W+1, -1));
    //cout << v[2][2];

    //for(i=1; i<=n; i++)
        //for(w=1; w<=W; w++)
            //v[i][w] = -1;

    cout << "Maximum profit: " << knapsack(v, weight, value, n, n, W);

    cout << "\nTaken items are ";
    i = n, w = W;
    while(i > 0 && w > 0)
    {
        if(v[i][w] != v[i-1][w])
        {
            cout << i << " ";
            w = w - weight[i];
            i--;
        }
        else i--;
    }

    return 0;
}
