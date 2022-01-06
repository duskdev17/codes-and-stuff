#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;

void maxHepify(int a[], int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    if(l <= n-1 && a[l] > a[i])
        largest = l;
    else largest = i;
    if(r <= n-1 && a[r] > a[largest])
        largest = r;

    if(largest != i)
    {
        swap(a[i], a[largest]);
        maxHepify(a, largest);
    }
}

void buildMaxHeap(int a[])
{
    for(int i = n/2 - 1; i >= 0; i--)
        maxHepify(a, i);
}

void heapSort(int a[])
{
    buildMaxHeap(a);

    for(int i = n-1; i >= 1; i--)
    {
        swap(a[i], a[0]);
        n = n - 1;
        maxHepify(a, 0);
    }
}

int main()
{
    n = 10;
    int a[] = {1, 14, 10, 8, 7, 9, 3, 12, 16, 100};

    heapSort(a);

    cout << "After sorting: ";
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}
