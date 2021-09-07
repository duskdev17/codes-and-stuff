//Function overloading and Ambiguity
//Write a C++ code that shows the ambiguity problem in Function Overloading.
#include<iostream>
using namespace std;

class myFunc {
public:
	void func(int a, int b) {
		cout << "Sum: " << a + b << endl;
		cout << "Integer Parameterized Function was called." << endl;
	}

	void func(float a, float b) {
		cout << "Sum: " << a + b << endl;
		cout << "Float Parameterized Function was called." << endl;
	}
};


int main() {
	myFunc ob;

	ob.func(65.43f, 51.54f);

	return 0;
}
