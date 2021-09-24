//Week 13- STL Container Classes - Maps
//Write a C++ program using Map to store stduent's Name and Id
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main() {
	int n, id, age;
	string name;
	map<string, int> m;
	map<string, int>::iterator it;

	cout << "Enter input count: ";
	cin >> n;

	cout << "Enter Name and Id separtely: ";
	for (int i = 0; i < n; i++) {
		cin >> name >> id;
		m.insert(make_pair(name, id));
	}

	cout << "Showing stored data: " << endl;
	for (it = m.begin(); it != m.end(); it++) {
		cout << "Name: " << it->first << "\tId: " << it->second << endl;
	}

}