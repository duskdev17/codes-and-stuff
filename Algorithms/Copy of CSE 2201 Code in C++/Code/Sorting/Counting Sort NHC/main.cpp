#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;

    cout << "How many numbers? ";
    cin >> n;
    int a[n], b[n];
    cout << "Enter your values: ";
    for(i=0; i<n; i++)
        cin >> a[i];

    //this function will return maximum value of an array
    int k = *max_element(a, a+n);
    int c[k+1];
    fill_n(c, k+1, 0); //initial all c[] values to 0

    for(j=0; j<n; j++)
        c[a[j]] = c[a[j]] + 1; //counting frequency of each element

    //calculating number of elements less than or equal to index
    c[0] = c[0] - 1; //adjusting index
    for(i=1; i<=k; i++)
        c[i] = c[i] + c[i-1];

    for(j=n-1; j>=0; j--)
    {
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }

    cout << "After sorting: ";
    for(i=0; i<n; i++)
        cout << b[i] << " ";

    return 0;
}
