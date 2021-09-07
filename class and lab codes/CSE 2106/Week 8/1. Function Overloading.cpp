//function overloading
//Write a C++ program that Calculates the area of Square, Circle and Triangle using only one function.
#include<iostream>
using namespace std;

class areaClass {
private:
	double x;
public:
	void area(double a) {
		x = a * a;
		cout << "Area of the Square is: " << x << endl;
	}

	void area(double a, double b) {
		x = a * b * b;
		cout << "Area of Circle is: " << x << endl;
	}

	void area(double a, double b, double c) {
		x = a * b * c;
		cout << "Area of Triangle is: " << x << endl;
	}
};

void showMenu() {
	cout << "1. Area of Square." << endl;
	cout << "2. Area of Circle." << endl;
	cout << "3. Area of Triangle." << endl;
	cout << "4. Exit." << endl;
}

int main() {
	int option = 0;
	double s, r, b, h;

	areaClass obj;

	do {
		showMenu();
		cout << "Option: ";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Enter the side of Square: ";
			cin >> s;

			obj.area(s);
			break;

		case 2:
			cout << "Enter the Radius of Circle: ";
			cin >> r;

			obj.area(3.1416, r);
			break;

		case 3:
			cout << "Enter the Base and Height of Triangle: ";
			cin >> b >> h;

			obj.area(0.5, b, h);
			break;

		}

	} while (option != 4);
}