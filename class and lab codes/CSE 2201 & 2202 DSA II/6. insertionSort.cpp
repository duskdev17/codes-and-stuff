#include < iostream >
using namespace std;

int main() {
    int arr[5], n, key, j = 0, i;

    cout << "Enter input count: ";
    cin >> n;

    cout << "Enter inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted Array: " << endl;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}