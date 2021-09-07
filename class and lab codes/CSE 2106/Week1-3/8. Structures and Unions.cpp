//Structures & Union 
//Show a difference between structure and Union
#include<iostream>
using namespace std;

struct MyStruct
{
	int a;
	float b;
	char c;
};

union MyUnion
{
	int a;
	float b;
	char c;
};

int main() {
	struct MyStruct s1;
	union MyUnion u1;

	cout << "Size of MyStruct is: " << sizeof(MyStruct) << endl;
	cout << "Size of MyUnion is: " << sizeof(MyUnion) << endl;

	return 0;
}