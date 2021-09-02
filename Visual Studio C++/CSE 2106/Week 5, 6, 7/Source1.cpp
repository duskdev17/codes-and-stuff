//
//write a c++ program that calculates body mass index(BMI)
#include<iostream>
using namespace std;

class bmiData {
public:
	double weight, height;

	bmiData(double w, double h) {
		weight = w;
		height = h;
	}

};

void calculateBMI(bmiData d1) {
	double bmi;
	bmi = (d1.weight / d1.height);
	cout << "BMI: " << bmi << endl;
}

int main() {
	double weight, height;

	cout << "Enter Weight: ";
	cin >> weight;

	cout << "Enter Height: ";
	cin >> height;

	bmiData dt1(double weight, double height);

	calculateBMI(dt1);


	return 0;
}



