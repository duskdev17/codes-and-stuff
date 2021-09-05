//week 5
//nested class
//write a c++ program to calculate the length of a string
#include <iostream>
#include<string>
using namespace std;

class class1 {
public:
	class class2 {
	private:
		string str;
	public:
		void calculateLength(string s) {
			str = s;

			cout << "String	Length: " << str.length() << endl;
		}
	};
};

int main() {
	string s;

	cout << "Enter a String: ";
	getline(cin, s);

	class1::class2 ob;

	ob.calculateLength(s);

	return 0;
}