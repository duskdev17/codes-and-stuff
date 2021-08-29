//Last in First out - Stack
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define N 5
using namespace std;

int stack[N];
int top = -1;

void showMenu() {
	cout << "*******STACK MENU*******" << endl;
	cout << "1. Push" << endl;
	cout << "2. Pop" << endl;
	cout << "3. Display Top" << endl;
	cout << "4. Display" << endl;
	cout << "5. Exit" << endl;
	cout << "******************" << endl;
}

void push()
{
	int x;
	cout << "Enter data: ";
	cin >> x;
	if (top == N - 1)
		cout << "Overflow" << endl;
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop() {
	int item;

	if (top == -1)
		cout << "Underflow" << endl;
	else {
		item = stack[top];
		top--;
		cout << "Popped Item: " << item << endl;
	}
}

void display_top()
{
	if (top == -1)		cout << "Underflow" << endl;
	else
		cout << "Top item: " << stack[top] << endl;
}

void display() {
	int i;

	cout << "Stacked items:";

	for (i = top; i >= 0; i--) {
		cout << " " << stack[i];
	}

	cout << endl;
}int main()
{
	int option;

	do {
		showMenu();

		cout << "Option: ";
		cin >> option;

		system("cls");

		//menu
		switch (option) {
		case 1:
			push();
			break;

		case 2:
			pop();
			break;

		case 3:
			display_top();
			break;

		case 4:
			display();
			break;
		}

		default: 
			cout << "Invalid choice" << endl;

	} while (option != 5);

	getchar();
}