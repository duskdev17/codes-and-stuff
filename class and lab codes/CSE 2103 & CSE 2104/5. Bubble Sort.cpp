#include <iostream>
using namespace std;

int main() {
    int array[1000], n = 0;

    cout << "Enter number of inputs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < (n - 1); i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array:";

    for (int i = 0; i < n; i++) {
        cout << "  " << array[i];
    }
    cout << endl;

}