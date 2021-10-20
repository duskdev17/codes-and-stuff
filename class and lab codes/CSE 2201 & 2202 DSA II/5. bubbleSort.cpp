#include<iostream>
using namespace std;

int main() {
    int n, i, j, arr[1000], temp;

    cout << "Enter input count: ";
    cin >> n;

    cout << "Enter inputs: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < (n - 1); i++) {
        for (j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}