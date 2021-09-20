//Structure and Class
//Write a c++ program that shows a relation and difference between Structure and Class
#include<iostream>
#include<math.h>
using namespace std;

class baseData {
public:
	void baseShow() {
		cout << "Accessing function of base class." << endl;
	}
};

class derivedData : public baseData {
public:
	void derivedShow() {
		cout << "Accessing function of derived class." << endl;
		cout << "Thus Class supports inheritance." << endl;
	}
};

struct structData {
	void structShow() {
		cout << "\nAccessing function from Structure." << endl;
		cout << "Structure doesn't support inheritance." << endl;
	}
};

int main() {
	class derivedData object;
	struct structData st;

	object.baseShow();
	object.derivedShow();

	st.structShow();

	return 0;
}