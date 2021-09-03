//Passing object to function
//Write a c++ program that calculates BMI of any individual
#include <iostream>
using namespace std;

class bmiData {

public:
    double dt;

    bmiData(double x) {
        dt = x;
    }
};


void bmiCalculate(bmiData  bd1, bmiData  bd2) {
    double bmi;
    bmi = (bd1.dt / bd2.dt);

    cout << "BMI: " << bmi << endl;
}


int main() {
    double w, h;

    cout << "Enter Weight: ";
    cin >> w;
    cout << "Enter Height: ";
    cin >> h;

    bmiData weight(w), height(h);
    bmiCalculate(weight, height);

    return 0;
}