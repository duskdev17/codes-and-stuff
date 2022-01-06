#include<bits/stdc++.h>
using namespace std;

void print_LCS(char X[], char *b, int i, int j, int n)
{
    if(i == 0 || j == 0)
        return;

    if( *((b+i*n)+j) == 'C')        //b[i][j]
    {
        print_LCS(X,b,i-1,j-1,n);
        cout << X[i-1];     //  X[i] was not working
    }

    else if(*((b+i*n)+j) == 'U')    //b[i][j]
        print_LCS(X,b,i-1,j,n);

    else
        print_LCS(X,b,i,j-1,n);
}

int main()
{
    int m,n;

    //char x[100], y[100];
    //gets(x);
    //gets(y);

    char x[] = "ABCBDAB";
    char y[] = "BDCABA";

    m = strlen(x);
    n = strlen(y);

    int c[m+1][n+1];
    char b[m+1][n+1];

    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                c[i][j] = 0;
            else if(x[i-1] == y[j-1])
            {
                c[i][j] = c[i-1][j-1]+1;
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

        cout << c[m][n];

        cout << "\nLCS: ";
        print_LCS(x,b[0],m,n,n+1);

        return 0;
}

