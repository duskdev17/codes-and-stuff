#include <bits/stdc++.h>

using namespace std;

int findingMax(int a[], int n)
{
    int max = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
}

void countSort(int a[], int n)
{
    int i, max, index;

    max = findingMax(a, n);
    int k[max+1];
    memset(k, 0, sizeof(k));

    for(i=0; i<n; i++)
    {
        index = a[i];
        k[index]++;
    }

    //print result
    for(i=0; i<=k; i++)
    {
        if(k[i]!=0)
        {
            for(int j=0; j<k[i]; j++)
                cout << i << " ";
        }
    }
}

int main()
{
    int i, n;

    cout << "How many numbers: ";
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
        cin >> a[i];

    countSort(a, n);

    return 0;
}
