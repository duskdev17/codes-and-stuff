//c++ Arrays & Strings
//Create an array and string then print it
#include<iostream>
using namespace std;

int main() {
	int a[100] = { 10, 20, 30, 40, 50 };
	string b = "BAUST";

	cout << "Array: ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

	cout << "\nString: " << b << endl;

	return 0;
}