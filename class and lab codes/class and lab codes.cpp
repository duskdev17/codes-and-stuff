//linear
#include<iostream>
using namespace std;

int main() {
	int key, i=0,n, a[1000];

	cout << "Enter number of inputs: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "Enter a number to search: ";
	cin >> key;

	while (i<n && a[i] != key) {
		i++;
	}

	cout << "Item found at " << i << " index." << endl;

	return 0;
}