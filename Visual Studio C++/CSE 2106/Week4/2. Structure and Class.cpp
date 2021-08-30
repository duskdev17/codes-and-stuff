//Struct and Class
//Write a c++ program that shows a relation between Structure and Class
#include<iostream>
#include<math.h>
using namespace std;

class data {
	char name[100];
	int id;
};

struct sData {
	char name[100];
	int id;
};

int main() {
	class data object;
	struct sData s1;

	cout << "Size of a class's object: " << sizeof(object) << endl;
	cout << "Size of an structure's object: " << sizeof(s1) << endl;

}