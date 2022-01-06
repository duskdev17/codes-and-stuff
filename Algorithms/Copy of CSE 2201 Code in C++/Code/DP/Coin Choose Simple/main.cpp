#include <bits/stdc++.h>

using namespace std;

int main()
{
    int S = 11, temp;
    int v[3] = {1, 3, 5};
    int m[12];

    m[0] = 0;
    for(int i=1; i<=S; i++)
        m[i] = INT_MAX;  //initialing all value to infinity.

    for(int i = 1; i <= S; i++)
        for(int j = 0; j < 3; j++)
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

    cout << "Minimum number of coin is " << m[S];

    return 0;
}
