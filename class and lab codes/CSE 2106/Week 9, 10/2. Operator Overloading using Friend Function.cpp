//week 9 - operator overloading using friend function
//Write a C++ code that adds the real and imaginary part of two numbers
#include<iostream>
using namespace std;

class Complex {
private:
	int rNum, iNum;
public:
	Complex(int a, int b) {
		rNum = a;
		iNum = b;
	}

	void display() {
		cout << "\nResult: " << rNum << " + " << iNum << "i" << endl;
	}

	friend Complex operator + (Complex c1, Complex c2);
};


Complex operator + (Complex c1, Complex c2) {
	return Complex(c1.rNum + c2.rNum, c1.iNum + c2.iNum);
}


int main() {
	int a1, b1, a2, b2;

	cout << "\nEnter real and imaginary part of the first number: ";
	cin >> a1 >> b1;

	cout << "\nEnter real and imaginary part of the second number: ";
	cin >> a2 >> b2;

	Complex com1(a1, b1), com2(a2, b2);
	Complex com3 = com1 + com2;
	com3.display();
}
