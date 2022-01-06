#include <iostream>

using namespace std;

void kmp(string text, string pattern);
void cspf(string pattern, int cspa[]);

int main()
{
    string text, pattern;

    getline(cin, text);
    getline(cin, pattern);

    kmp(text, pattern);

    return 0;
}

void kmp(string text, string pattern)
{
    int m, n, i, j;
    n = text.length();
    m = pattern.length();
    int cspa[n];

    cspf(pattern, cspa);
    for(i=0; i<m; i++)
        cout << cspa[i] << " ";

    int q = 0;
    for(i=0; i<n; i++)
    {
        while(q>0 && pattern[q] != text[i])
            q = cspa[q-1];

        if(pattern[q] == text[i])
            q++;

        if(q == m)
        {
            //cout << "\ni=" << i << " " << "q=" << q;
            cout << "\nPattern occurs at index " << i - (m-1) << endl;
            q = cspa[q-1];
        }
    }
}

void cspf(string pattern, int cspa[])
{
    int m, k, q;
    m = pattern.length();
    cspa[0] = 0;
    k = 0;
    for(q=1; q<m; q++)
    {
        while(k>0 && pattern[k]!=pattern[q])
            k = cspa[k-1];


        if(pattern[k] == pattern[q])
            k++;

        cspa[q] = k;
    }
}
