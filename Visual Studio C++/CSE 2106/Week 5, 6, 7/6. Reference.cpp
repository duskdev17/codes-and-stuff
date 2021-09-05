//week 7 - reference
//write a c++ program using reference calculates the factorial of a given number.
#include<iostream>
using namespace std;

void calculateFactorial(int* a) {
	int fct = 1;
	for (int i = 1; i <= *a; ++i) {
		fct = fct * i;
	}
	cout << "\tFactorial: " << fct << endl;;
}

int main() {
	int num;

	cout << "\n\tEnter a positive number: ";
	cin >> num;

	calculateFactorial(&num);

	return 0;
}