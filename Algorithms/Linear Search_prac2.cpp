#include<iostream>
using namespace std;

int linearSearch(int arr[], int searchKey, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == searchKey) {
			return i;
		}
	}
	return -1;
}

int main() {
	int myArray[1000], key = 0, size = 0, n = 0, result = 0;

	cout << "How many data do you want to store?" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> myArray[i];
	}

	cout << "Enter a key to search: ";
	cin >> key;

	size = sizeof(myArray) / myArray[0];

	result = linearSearch(myArray, key, size);

	if (result != -1) {
		cout << "Found on index[" << result << "]" << endl;
	}

	if (result == -1) {
		cout << "Not found" << endl;
	}
}