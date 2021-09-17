//Week 10 - Constructor, Destructor, Inheritance
//Write a C++ program to demonstrate the constructor call in Inheritance
#include<iostream>
using namespace std;

class base1 {
public:
	base1() {
		cout << "\n\tBase1 class called" << endl;
	}
};

class base2 {
public:
	base2() {
		cout << "\tBase2 class called" << endl;
	}
};

class Child : public base1, public base2 {
public:
	Child() {
		cout << "\tChild class called" << endl;
	}
};

int main() {
	Child obj1;
}
