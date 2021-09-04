//week 5
//Passing object to function, static class members
//Write a c++ program that calculates BMI of any individual
#include <iostream>
using namespace std;

class bmiData {
public:
    double dt;

    bmiData(double x) {
        dt = x;
    }

    static void showMessege() {
        cout << "#### BMI Calculator ####" << endl;
    }
};


void bmiCalculate(bmiData  bd1, bmiData  bd2) {
    static double bmi;
    bmi = (bd1.dt / bd2.dt);

    cout << "BMI: " << bmi << endl;
}


int main() {
    double w, h;

    bmiData::showMessege();

    cout << "Enter Weight(kilograms): ";
    cin >> w;
    cout << "Enter Height(meters): ";
    cin >> h;

    bmiData weight(w), height(h);
    bmiCalculate(weight, height);

    return 0;
}