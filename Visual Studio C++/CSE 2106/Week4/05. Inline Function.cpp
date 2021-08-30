//Inline Function
//Write a c++ program using inline function that prints the Fibonacci Series
#include<iostream>
using namespace std;

inline void fibonacciSeries(int terms) {
	int x = 0, y = 1, z;

	cout << "Fibonacci Series: " << x << " " << y << " ";

	for (int i = 1; i <= terms; i++) {
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}
}

void main()
{
	int terms;

	cout << "Enter the Number of Terms: ";
	cin >> terms;

	fibonacciSeries(terms);
}