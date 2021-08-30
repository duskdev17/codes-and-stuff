//Class
//Write a c++ code using class that multiplies two numbers
#include <iostream>
using namespace std;

class usrData {
public:
	int a, b;

	int multiply() {
		return a * b;
	}
};

int main() {
	int c;
	usrData ob1;

	cout << "Enter first number: ";
	cin >> ob1.a;

	cout << "Enter second number: ";
	cin >> ob1.b;

	c = ob1.multiply();

	cout << "Result: " << c << endl;

	return 0;
}