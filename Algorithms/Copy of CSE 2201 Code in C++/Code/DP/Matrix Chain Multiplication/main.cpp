#include <bits/stdc++.h>

using namespace std;

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
    int i, j, k, len, n, d1, d2, flag = 0;
    cout << "How many matrices?" << endl;
    cin >> n;
    int d[n+1];
    int maximum = 999999999;
    //cout << maximum;

    cout << "Plz enter dimensions of each matrix in separate line." << endl;
    for(i=0; i<n; i++)
    {
        cin >> d1 >> d2;
        if(i == 0)
        {
            d[0] = d1;
            d[1] = d2;
        }
        else
        {
            if(d1 != d[i])
                flag = 1;
            d[i+1] = d2;
        }
    }

    if(flag == 1)
    {
        cout << "Multiplication is not possible!";
        return 1;
    }

    /*
    cout << "Dimension array: ";
    for(i=0; i<=n; i++)
        cout << d[i] << " ";
    */

    int N[n][n];
    for(i=0; i<=n-1; i++)
        N[i][i] = 0;

    /*
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            s[i][j] = -1;
    }
    */

    for(len=1; len<=n-1; len++)
        for(i=0; i<=(n-1)-len; i++)
        {
            j = i + len;
            N[i][j] = maximum;
            for(k=i; k<=j-1; k++)
            {
                int cost = N[i][k] + N[k+1][j] + d[i]*d[k+1]*d[j+1];
                if(cost < N[i][j])
                {
                    N[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }

    cout << "\nTotal multiplication = " << N[0][n-1] << endl;
    /*
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%2d ", s[i][j]);
            //cout << s[i][j] << " ";
        cout << endl;
    }
    */
    cout << endl;
    print(0, n-1);

    return 0;
}


/*
30 35
35 15
15 5
5 10
10 20
20 25
*/
