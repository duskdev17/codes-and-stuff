#include <iostream>
using namespace std;

int main() {
	int array[100], n, item;

	cout << "Enter the number of inputs: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	cout << "Enter a Value to search: ";
	cin >> item;

	int i = 0;
	while (i < n && array[i] != item) {
		i++;
	}

	if (i < n) {
		cout << "Item found at " << i << "th location" << endl;
	}
	else {
		cout << "Item not found!" << endl;
	}
}