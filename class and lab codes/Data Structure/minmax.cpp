#include <iostream>
using namespace std;

int main() {
    int arr[] = { 2, 1, 6, 9, 4, 10, 15, 21 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    cout << "Maximum Value = " << max << endl;
    cout << "Minimum Value = " << min << endl;

    return 0;
}