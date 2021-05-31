#include<iostream>
#define size 20
using namespace std;

int BinarySearch(int a[], int k);
int main() {
	int array[size] = { 10, 20, 30, 40, 50, 60 };
	int key, pos;

	cout << "Enter a key to search: ";
	cin >> key;

	pos = BinarySearch(array, key);

	if (pos == -1) {
		cout << "Key not found in this array" << endl;
	}
	else {
		cout << "Key " << key << " found on at location[" << pos << "]" << endl;
	}
}

int BinarySearch(int a[], int k) {
	int low = 0, high = size - 1, middle;

	while (low <= high) {
		middle = (low + high) / 2;

		if (a[middle] == k) {
			return middle;
		}
		else if (a[middle] > k) {
			high = middle - 1;
		}
		else {
			low = middle + 1;
		}
	}
	return -1;
}