//Linear search algorithm
#include<iostream>
#define size 10
using namespace std;

int LinearSearch(int a[], int k);
int main() {
	int array[size] = { 21, 32, 43, 45, 12, 32};
	int key, pos;

	cout << "Enter a search key: " << endl;
	cin >> key;	

	pos = LinearSearch(array, key);

	if (pos == -1) {
		cout << "Key not found in the array" << endl;
	}
	else {
		cout << "The key " << key << " is found on location " << pos << endl;
	}
}

int LinearSearch(int a[], int k) {
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] == k) {
			return i;
		}
	}
	return -1;
}