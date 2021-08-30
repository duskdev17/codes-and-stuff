//Union and Class
//Write a c++ program that shows a difference between Union and Class
#include<iostream>
#include<math.h>
using namespace std;

class data {
	char name[100];
	int id;
};

union uData {
	char name[100];
	int id;
};

int main() {
	class data object;
	union uData u1;

	cout << "Size of a class's object: " << sizeof(object) << endl;
	cout << "Size of an union's object: " << sizeof(u1) << endl;

}