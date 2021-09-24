//Week 12 -- Exception Handling
//Suppose an Age Verification Program has age restriction of minimum 22 y/o. Now Write a C++ code to show 'Request Rejected.' message if the person is below 22 otherwise show 'Request Approved.'.
#include <iostream>
using namespace std;

int main() {
    int ageValue;

    cout << "Age Verification Program\n" << endl;
    cout << "Enter an age: ";
    cin >> ageValue;

    try {
        int age = ageValue;
        if (age >= 22) {
            cout << "Request Approved." << endl;
        }
        else {
            throw (age);
        }
    }
    catch (int value) {
        cout << "Request Rejected." << endl;
    }

}
