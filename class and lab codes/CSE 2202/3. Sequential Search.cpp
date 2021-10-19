#include <iostream>

using namespace std;

int sequential_search(int A[], int n, int z);

int main()
{
    int i, index, length, item, data[10];
    cout << "enter array length :" << endl;
    cin >> length;
    cout << "enter input values:" << endl;


    for (i = 0; i < length; i++)
        cin >> data[i];


    cout << "enter search key,item:";
    cin >> item;

    index = sequential_search(data, length, item);

    if (index == -1)
        cout << "item not found" << endl;

    else
        cout << "item found at" << "position" << index << endl;
    return 0;
}
int sequential_search(int A[], int n, int z)
{
    int i, index;
    i = 0, index = -1;

    while (i < n && A[i] != z) {
        i++;
    }

    if (i < n) {
        index = i;
    }
    return index;
}