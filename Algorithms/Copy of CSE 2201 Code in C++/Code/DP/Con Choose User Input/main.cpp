#include <bits/stdc++.h>

using namespace std;

int main()
{
    int S, n, temp, i, j;

    cout << "Enter the total sum: ";
    cin >> S;
    cout << "How many coins: ";
    cin >> n;

    int v[n];
    cout << "Enter their values: ";
    for(i=0; i<n; i++)
        cin >> v[i];

    int m[S+1];
    m[0] = 0;
    for(i=1; i<=S; i++)
        m[i] = INT_MAX;  //initialing all value to infinity.

    for(i = 1; i <= S; i++)
        for(j = 0; j < 3; j++)
        {
            //We can consider a Coin if its value less than i
            if(v[j] <= i)
            {
                //consider if it is better to take
                temp = m[i - v[j]];
                if(temp+1 < m[i])
                {
                    m[i] = temp + 1;
                }
            }
        }

    cout << "Minimum number of coins is " << m[S];

    return 0;
}
