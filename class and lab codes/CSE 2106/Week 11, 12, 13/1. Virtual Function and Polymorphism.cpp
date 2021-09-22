//week 11 -- Virtual Function & Polymorphism
//Write a C++ program to demonstrate the use of virtual function.
#include <iostream>    
using namespace std;

class class1 {
public:
	virtual void show() {
		cout << "Base class is called" << endl;
	}
};

class class2 :public class1 {
public:
	void show() {
		cout << "Derived Class is called" << endl;
	}
};

int main() {
	class1* ob1;
	class2 ob2;
	ob1 = &ob2;
	ob1->show();
}