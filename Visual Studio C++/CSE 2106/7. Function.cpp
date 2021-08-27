//Function
//Add two number using function
#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int a, b, result;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	result = add(a, b);

	cout << "Result: " << result << endl;
}