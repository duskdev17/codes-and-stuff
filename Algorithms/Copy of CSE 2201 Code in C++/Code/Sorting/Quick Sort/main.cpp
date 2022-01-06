#include <bits/stdc++.h>

using namespace std;

int partitioning(int a[], int p, int r);
void quickSort(int a[], int p, int r);

int main()
{
    int i, n;
    cout << "How many numbers? ";
    cin >> n;
    int a[n];
    cout << "Plz, enter your numbers: ";
    for(i=0; i<n; i++)
        cin >> a[i];

    quickSort(a, 0, n-1);

    cout << "After sorting: ";
    for(i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}

int partitioning(int a[], int p, int r)
{
    int x = a[r];
    int i = p - 1;
    for(int j=p; j<r; j++)
    {
        if(a[j] <= x)
        {
            i++;
            swap(a[i], a[j]); //this function will swap two variable's value
        }
    }
    swap(a[i+1], a[r]);
    i++;
    return i;
}

void quickSort(int a[], int p, int r)
{
    if(p < r)
    {
        int q = partitioning(a, p, r);
        quickSort(a, p, q-1);
        quickSort(a, q+1, r);
    }
}
