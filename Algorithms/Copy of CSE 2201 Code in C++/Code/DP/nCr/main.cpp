#include <iostream>

using namespace std;

int m[100][100];

int nCr(int n, int r);

int main()
{

    cout << "Plz enter values: ";
    int n, r, x;
    cin >> n >> r;

    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= r; j++)
            m[i][j] = -1;

    x = nCr(n, r);

    cout << x;

    return 0;
}

int nCr(int n, int r)
{
    if(n == r || r == 0)
        return 1;
    else if(m[n][r] != -1)
        return m[n][r];
    else
    {
        m[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
        return m[n][r];
    }
}
