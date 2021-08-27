//c++ expression
//Show operations of +, -, *, /, ==
#include<iostream>
using namespace std;

int main() {
	int a = 100, b = 20, add, subtract, multiply, divide;
	add = a + b;        //+
	subtract = a - b;	//-
	multiply = a * b;	//*
	divide = a / b;		// /

	cout << "a = 100, b = 20: " << endl;
	cout << "Addition Operation: " << add << endl;
	cout << "Subtact Operation: " << subtract << endl;
	cout << "Multiply Operation: " << multiply << endl;
	cout << "Divide Operation: " << divide << endl;

	return 0;
}