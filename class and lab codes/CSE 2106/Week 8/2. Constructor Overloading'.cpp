// Constructor overloading
//Write a C++ program to calculate the volume of Constructor Overloading.
#include <iostream>
using namespace std;

class sample {
public:
	double vol;

	sample() {
		vol = 0;
	}

	sample(double s) {
		vol = s * s * s;
	}

	void show() {
		if (vol == 0) {
			cout << "Non Parameterized Constructor was called. " << endl;
		}
		else {
			cout << "Volume of the Cube is: " << vol << endl;
		}

	}
};

int main() {
	double s;

	cout << "Enter the Side of a Cube: ";
	cin >> s;

	sample s1;
	sample s2(s);

	s1.show();
	s2.show();

	return 0;
}
