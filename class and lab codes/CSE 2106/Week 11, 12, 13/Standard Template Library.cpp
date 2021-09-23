//Week 13 - Standard Template Library, Algorithm
//Write a C++ code using STL to sort an array
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int myArr[100], n;

	cout << "Enter input count: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> myArr[i];
	}

	sort(myArr, myArr + n);

	cout << "Sorted Array: ";

	for (int i = 0; i < n; ++i)
		cout << myArr[i] << " ";

	cout << endl;
}
