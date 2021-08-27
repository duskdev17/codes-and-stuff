//c++ pointer
//Multiply two numbers using pointer
#include<iostream>
using namespace std;

int main() {
	int firstNum, secondNum, result, * ptr1, * ptr2;

	cout << "Enter first number: ";
	cin >> firstNum;

	cout << "\nEnter second number: ";
	cin >> secondNum;

	ptr1 = &firstNum;
	ptr2 = &secondNum;

	result = *ptr1 / *ptr2;

	cout << "\nAfter multiplication: " << result << endl;


	return 0;
}