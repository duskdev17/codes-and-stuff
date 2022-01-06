#include <bits/stdc++.h>

using namespace std;

void countSort(int a[], int n, int exp)
{
    int b[n], i;
    int c[10] = {}; //set all element to 0

    for (i = 0; i < n; i++)
        c[ (a[i]/exp)%10 ]++;

    c[0]--;
    for(i=1; i<10; i++)
        c[i] = c[i] + c[i-1];

    for (i = n - 1; i >= 0; i--)
    {
        b[ c[ (a[i]/exp)%10 ] ] = a[i];
        c[ (a[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        a[i] = b[i];
}

void radixsort(int a[], int n)
{
    // Find the maximum number to know number of digits
    int k = *max_element(a, a+n);

    for (int exp = 1; k/exp > 0; exp *= 10)
        countSort(a, n, exp);
}

int main()
{
    int i, j, n;

    cout << "How many numbers? ";
    cin >> n;
    int a[n], b[n];
    cout << "Enter your values: ";
    for(i=0; i<n; i++)
        cin >> a[i];

    radixsort(a, n);

    cout << "After sorting: ";
    for(i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}
