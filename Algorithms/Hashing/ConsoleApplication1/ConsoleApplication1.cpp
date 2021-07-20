#include<iostream>
using namespace std;

void domyhomework() {
	cout << "I just got executed!" << endl;
}

int gotosleep() {
	cout << "I just got executed!" << endl;
	return 0;
}


int main() {
	domyhomework(); // call the function
	gotosleep();
	return 0;
}
