#include <bits/stdc++.h>
#define inf 99999999
using namespace std;

void selectedCoin(int c[], int S)
{
    if(S < 1)
        return;

    selectedCoin(c, S-c[S]);
    cout << c[S] << " ";
    S = S - c[S];
}

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

    int m[S+1], c[S+1];
    fill_n(m, S+1, inf);
    fill_n(c, S+1, -1);
    m[0] = 0;


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
                    c[i] = v[j];
                }
            }
        }

    if(m[S] == inf)
        cout << "Not Possible!";
    else
    {
        cout << "Minimum number of coins is " << m[S] << endl;
        cout << "Selected coins are: ";
        selectedCoin(c, S);
    }

    return 0;
}
