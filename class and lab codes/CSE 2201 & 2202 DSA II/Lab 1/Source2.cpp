//reverse array using for loop
#include<iostream>
using namespace std;

int main() {
	int arr[100], n;

	cout << "Element Number: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Non-reversed Array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Reversed Array: ";
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}

	return 0;
}
