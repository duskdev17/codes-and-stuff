//class, struct, union, friend function, inline function, parameterized constructor
//Write a c++ program that covers all these topics - struct, class, union, friend function, inline function, parameterized constructor
#include<iostream>
using namespace std;

class studentClass {
public:
	int i;

	//parameterized constructor
	studentClass(int x) {
		i = x;
		cout << "Accessing Parameterized Constructor." << endl;
	}

	void displayData();

	//friend function
	friend void friendFunc(studentClass);
};

//inline function
inline void studentClass::displayData() {
	cout << "Inside inline function, accessing value: " << i << endl;
}

//friend function
void friendFunc(studentClass s) {
	cout << "Inside Friend Function Function, accessing value: " << s.i << endl;
}

//struct
struct studentStruct {
	int i;
};

//union
union studentUnion {
	int i;
};

//main function
int main() {

	cout << "Class:" << endl;

	studentClass obj(76);
	obj.displayData();
	friendFunc(obj);

	cout << "\nStruct:" << endl;

	struct studentStruct s;
	s.i = 76;
	cout << "Accessing value using structure: " << s.i << endl;

	cout << "\nUnion:" << endl;

	union studentUnion u;
	u.i = 76;
	cout << "Accessing value using union: " << u.i << endl;


	return 0;
}