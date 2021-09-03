//pointer to objects
//write a c++ program that converts Celsius to Fahrenheit
#include <iostream>
using namespace std;

class Temperature {
private:
    double cel, fer;
public:
    Temperature(double a) {
        cel = a;
    }
    double convert() {
        fer = ((9.00 / 5.00) * cel) + 32.00;
        return fer;
    }
};

int main() {
    double cel;

    cout << "Enter the temperature in Celsius: ";
    cin >> cel;

    Temperature ob(cel);
    Temperature* ptr;
    ptr = &ob;

    cout << "Temperature in Fahrenheit: " << ptr->convert() << endl;

    return 0;
}