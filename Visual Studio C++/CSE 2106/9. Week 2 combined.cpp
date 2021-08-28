//Week 2 combined
//Write a C++ program to that stores student data
#include<iostream>
#include<string.h>
using namespace std;

struct student {
	string name;
	int id;
	float cgpa;
};

void display(struct student class_record[100])
{
	int i, len = 3;

	for (i = 0; i < len; i++) {
		cout << "Roll number: " << class_record[i].name << endl;
		cout << "Grade:" << class_record[i].id << endl;
		cout << "CGPA: " << class_record[i].cgpa << endl;
	}
}

int main()
{
	int n;

	struct student class_record[100] = {
			{ "Anik", 76, 0.00f },
			{ "Siam", 80, 4.00f },
			{ "Soumya", 66, 4.00f }
	};


	display(class_record);

	return 0;
}
