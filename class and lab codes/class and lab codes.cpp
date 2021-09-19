// Linear Search in C++

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int main() {
    int array[1000], n, key;

    cout << "Enter number of inputs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter a Number to Search: ";
    cin >> key;

    int result = search(array, n, key);

    (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result << endl;
}