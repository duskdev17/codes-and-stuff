//week 7 - combined
//this pointer, pointer to class member, reference
//write a c++ program that calculates the Area of a Triangle
#include <iostream>
using namespace std;
class triangle {
private:
    int base, height, area;

public:
    triangle(int b, int h) {
        base = b;
        height = h;
    }

    int calculateArea() {
        area = (base * height) / 2;
        return area;
    }

    int thisPtr(triangle ob1) {
        return this->calculateArea();
    }
};

int main() {
    int area, base, height;

    cout << "Enter the base of triangle: ";
    cin >> base;
    cout << "Enter the height of triangle: ";
    cin >> height;

    triangle ob(base, height);
    triangle* ptr = &ob;

    area = ptr->thisPtr(ob);
    cout << "Area of triangle is: " << area;
}