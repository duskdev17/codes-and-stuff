#include <iostream>
using namespace std;

int binarySearch(int array[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
            return mid;

        if (array[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int n, array[1000], key;

    cout << "Enter how many data you want to store: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter a value to search: ";
    cin >> key;

    int result = binarySearch(array, key, 0, n - 1);

    if (result == -1)
        printf("Element Not found!");
    else
        cout << "Element found at " << result << " index." << endl;
}