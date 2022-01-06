#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len1, len2;
    string str1, str2;

    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    len1 = str1.length();
    len2 = str2.length();

    int valueTable[len1+1][len2+1];
    char arrowTable[len1+1][len2+1];

    for(i=0; i<=len1; i++)
        for(j=0; j<=len2; j++)
        {
            if(i == 0 || j == 0)
                valueTable[i][j] = 0;
            else if(str1[i-1] == str2[j-1])
            {
                valueTable[i][j] = valueTable[i-1][j-1]+1;
                arrowTable[i][j] = 'C';
            }
            else if(valueTable[i-1][j] >= valueTable[i][j-1])
            {
                valueTable[i][j] = valueTable[i-1][j];
                arrowTable[i][j] = 'U';
            }
            else
            {
                valueTable[i][j] = valueTable[i][j-1];
                arrowTable[i][j] = 'L';
            }
        }

    for(i=0; i<=len1; i++)
    {
        for(j=0; j<=len2; j++)
            cout << valueTable[i][j] << " ";
        cout << endl;
    }

    i = len1;
    j = len2;
    string lcs;

    while(i != 0 && j != 0)
    {
        if(arrowTable[i][j] == 'C')
        {
            lcs.push_back(str1[i-1]);
            i--;
            j--;
        }
        else if(arrowTable[i][j] == 'U')
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    //reverse(lcs.begin(), lcs.end());
    cout << "LCS: " << lcs;

    return 0;
}
