//Week 13 -- Iterators, Containers, Vectors
//Write a C++ code to store values in Vector and print it.
#include <iostream>
#include <vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int n = 0, temp = 0, x;
	vector<int> vec;
	vector<int>::iterator it;

	cout << "Enter number of inputs: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	cout << "Stored Values: ";
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}

}