//Week 12 -- Generic Function and Generic Class
//Write a C++ code that adds int and double number using a generic class.
#include<iostream>
using namespace std;

template<typename T>
class testClass {
private:
	T var1;
	T var2;
	T result;
public:
	testClass(T x, T y) {
		var1 = x;
		var2 = y;
		result = var1 + var2;
	}

	void display() {
		cout << "Result: " << result << endl;
	}
};

int main() {
	int a, b;
	double c, d;

	cout << "Enter two int value to add: ";
	cin >> a >> b;
	testClass<int> ob(a, b);
	ob.display();

	cout << "Enter two double value to add: ";
	cin >> c >> d;
	testClass<double> ob1(c, d);
	ob1.display();
}