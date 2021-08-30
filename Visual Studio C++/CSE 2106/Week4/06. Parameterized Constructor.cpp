//Parameterized Constructor
//Write a c++ program 
#include<iostream>
#include<math.h>
using namespace std;

class squareRoot {
    int a, b;
public:
    squareRoot(int x) {
        a = x;
        b = sqrt(a);
    }

    void displayRoot() {
        cout << "The square root of " << a << " is " << b;
    }
};

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    squareRoot ob(x);
    ob.displayRoot();

    return 0;
}