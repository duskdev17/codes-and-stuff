// week 13 -- STL Container Classes - List, Algorithm
//Write a C++ code using List to reverse a given array
#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;

int main() {
	int n = 0, temp = 0;

	list<int> ls;
	list<int>::iterator it;

	cout << "Enter number of inputs: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		ls.push_back(temp);
	}

	ls.reverse();

	cout << "Reversed Array: ";
	for (it = ls.begin(); it != ls.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}