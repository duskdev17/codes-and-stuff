#include <iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

void MergeSort(int a[], int p, int r);
void Merge(int a[], int p, int q, int r);

int main()
{
    int a[8] = {1, 5, 3, 9, 4, 77, 99, 0};

    MergeSort(a, 0, 7);

    cout << "Sorted array: ";
    for(int i = 0; i < 8; i++)
        cout << a[i] << " ";

    return 0;
}

void MergeSort(int a[], int p, int r)
{
    if(p < r)
    {
        int q = (p + r) / 2;
        MergeSort(a, p, q);
        MergeSort(a, q+1, r);

        Merge(a, p, q, r);
    }
}

void Merge(int a[], int p, int q, int r)
{
    //calculate left sub-array elements
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];

    for(int i = 0; i < n1; i++)
        L[i] = a[p + i];
    L[n1] = INT_MAX;

    for(int j = 0; j < n2; j++)
        R[j] = a[q + j + 1];
    R[n2] = INT_MAX;

    int i = 0;
    int j = 0;

    for(int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
            a[k] = L[i], i++;
        else a[k] = R[j], j++;
    }
}












