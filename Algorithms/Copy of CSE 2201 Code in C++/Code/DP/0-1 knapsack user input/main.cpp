#include <iostream>

using namespace std;

int main()
{
    int n, i, w, W, take, leave;

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

    int v[n+1][W+1];

    for(i = 0; i <= n; i++)
        for(w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0)
                v[i][w] = 0; //Base case
            else if(weight[i] > w)
                v[i][w] = v[i-1][w]; //cant consider
            else
            {
                leave = v[i-1][w];
                take = value[i] + v[i-1][w-weight[i]];
                v[i][w] = max(leave, take);
            }
        }

    cout << "Maximum profit: " << v[n][W];

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
