//Classes and Objects
//Create a class and access its attributes
#include<iostream>
using namespace std;

class myClass {
public:
	int a;
	string b;
};

int main() {
	myClass ob1;

	cout << " Enter an integer number: ";
	cin >> ob1.a;

	cout << " Enter a string: ";
	cin >> ob1.b;

	cout << " Your entered number is: " << ob1.a << endl;
	cout << " Your entered string is: " << ob1.b << endl;

	return 0;
}