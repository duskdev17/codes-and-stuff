//Function Overloading
//Write a c++ code to demonstrate function overloading
#include<iostream>
using namespace std;

void func_display(int i) {
	cout << " Int value: " << i << endl;
}
void func_display(double f) {
	cout << " Float value: " << f << endl;
}
void func_display(char const* c) {
	cout << " Char value: " << c << endl;
}

int main() {
	func_display(70);
	func_display(76.61);
	func_display("Seven");

	return 0;
}
