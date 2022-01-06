#include<bits/stdc++.h>

using namespace std;

int coin(int m[], int v[], int s, int n)
{
    //Base case
    if(s < 1)
        return 0;

    //Memoization
    if(m[s] != INT_MAX)
        return m[s];

    int temp;
    for(int i=0; i<n; i++)
    {
        if(v[i] <= s)
        {
            temp = coin(m, v, s-v[i], n);
            if(temp+1 < m[s])
                m[s] = temp + 1;
        }
    }

    return m[s];
}

int main()
{
    int S, n, i, j;

    cout << "Enter the total sum: ";
    cin >> S;
    cout << "How many coins: ";
    cin >> n;

    int v[n];
    cout << "Enter their values: ";
    for(i=0; i<n; i++)
        cin >> v[i];

    int m[S+1];

    for(i=0; i<=S; i++)
        m[i] = INT_MAX;

    cout << "Minimum number of coins is " << coin(m, v, S, n);
}
