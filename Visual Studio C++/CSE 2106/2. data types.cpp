//c++ data types
//Display the size of all data types
#include<iostream>
using namespace std;

int main() {
	int a = 10;
	double b = 10.12;
	char c = 'A';
	string d = "BAUST";
	bool e = false;

	cout << "Size of integer: " << sizeof(a) << endl;
	cout << "Size of double: " << sizeof(b) << endl;
	cout << "Size of char: " << sizeof(c) << endl;
	cout << "Size of string: " << sizeof(d) << endl;
	cout << "Size of bool: " << sizeof(e) << endl;

	return 0;
}
}