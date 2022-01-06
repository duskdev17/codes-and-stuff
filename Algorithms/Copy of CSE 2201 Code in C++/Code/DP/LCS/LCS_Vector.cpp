#include<bits/stdc++.h>
using namespace std;

void print_LCS(char X[], vector < vector < char > > b, int i, int j)
{
    if(i == 0 || j == 0)
        return;

    if( b[i][j] == 'C')
    {
        print_LCS(X,b,i-1, j-1);
        cout << X[i-1];
    }
    else if(b[i][j] == 'U')
        print_LCS(X,b,i-1, j);
    else
        print_LCS(X,b,i,j-1);
}

int main()
{
    int m,n;

    char x[100], y[100];

    gets(x);
    gets(y);

    m = strlen(x);
    n = strlen(y);

    int c[m+1][n+1];
    vector < vector < char > > b (m+1, vector < char > (n+1)); //b[m+1][n+1]
    //U can do this as following.
    //vector < vector < char > > b; //create a vector of vector
    //b.assign(m+1, vector < char > (n+1)); //convert this vector to b[m+1][n+1]

    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                c[i][j] = 0;
            else if(x[i-1] == y[j-1])
            {
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 'C';
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j] = c[i-1][j];
                b[i][j]= 'U';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 'L';
            }
        }

    cout << c[m][n] << endl;

    cout << "LCS: ";
    print_LCS(x, b, m, n);
}

