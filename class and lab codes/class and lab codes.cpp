#include<iostream>
using namespace std;

void H

int main() {
	int i, n, A[1000];

	cout << "Input count: ";
	cin >> n;
	
	cout << "Enter data: ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	HEAPSORT(A, n);

	cout << "Sorted Sequence is: ";
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
}