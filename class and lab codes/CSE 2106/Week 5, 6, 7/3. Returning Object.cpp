//week 5
//returning object
//Write a c++ program to find the third angle of a triangle
#include <iostream>
using namespace std;

class triangle {
public:
    double angle1, angle2, angle3;
};

triangle findAngle(double a, double b) {
    triangle ob;

    ob.angle1 = a;
    ob.angle2 = b;
    ob.angle3 = 180 - (ob.angle1 + ob.angle2);
    cout << "Third Angle: " << ob.angle3 << endl;
    return ob;
}

int main() {
    double a, b;
    triangle object;

    cout << "Enter First Angle: ";
    cin >> a;

    cout << "Enter Second Angle: ";
    cin >> b;

    object = findAngle(a, b);

    return 0;
}