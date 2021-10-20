#include<iostream>
using namespace std;

int main() {
    int n, arr[100], i, j, min;
    cout << "Enter input count: ";
    cin >> n;

    cout << "Enter inputs:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}