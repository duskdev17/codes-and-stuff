#include <iostream>

using namespace std;

int main()
{
    int n, r, i, j;

    cin >> n >> r;
    int a[n+1][r+1];

    for(i = 0; i <= n; i++)
        for(j = 0; j <= i; j++)
        {
            if(i == j || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i-1][j] + a[i-1][j-1];
        }

    cout << a[n][r];

    return 0;
}
