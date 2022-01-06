#include <bits/stdc++.h>
using namespace std;
#define inf 999999999;
int s[100][100];

void print(int i, int j)
{
    if(i == j)
        cout << "A" << i;
    else
    {
        cout << "(";
        print(i, s[i][j]);
        print(s[i][j]+1, j);
        cout << ")";
    }
}

int main()
{
    int i, j, k, len, n, q;
    cout << "How many matrices?" << endl;
    cin >> n;
    int p[n+1];

    for(i=0; i<=n; i++)
        cin >> p[i];

    int m[n+1][n+1];
    for(i=1; i<=n; i++)
        m[i][i] = 0;

    for(len=2; len<=n; len++)
        for(i=1; i<=n-len+1; i++)
        {
            j = i + len - 1;
            m[i][j] = inf;
            for(k=i; k<j; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if(q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }

    cout << "Total operation: " << m[1][n] << endl;
    cout << "Matrix Multiplication Order: ";
    print(1, n);
    cout << endl;

    return 0;
}
