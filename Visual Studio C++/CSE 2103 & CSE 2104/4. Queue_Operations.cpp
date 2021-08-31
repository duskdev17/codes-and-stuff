////Queue: First in First out
#include <iostream>
#define SIZE 5
using namespace std;

int queue[SIZE], front = -1, rear = -1;

void showMenu() {
	cout << "*******Queue MENU*******" << endl;
	cout << "1. Enqueue" << endl;
	cout << "2. Dequeue" << endl;
	cout << "3. Display Front" << endl;
	cout << "4. Display Queue" << endl;
	cout << "5. Exit" << endl;
	cout << "******************" << endl;
}

void enqueue() {
	int value;

	cout << "Enter a value" << endl;
	cin >> value;

	if (rear == SIZE - 1) {
		cout << "Overflow" << endl;
	}

	else {
		if (front == -1)
			front = 0;
		rear++;
		queue[rear] = value;
	}
}

void dequeue() {
	if (front == -1 && rear == -1) {
		cout << "Underflow" << endl;
	}
	else if (front == rear) {
		front = rear = -1;
	}
	else {
		front++;
	}
}

void displayFront()
{
	if (front == -1 && rear == -1) {
		cout << "Underflow" << endl;
	}
	else {
		cout << "Front element is: " << queue[front] << endl;;
	}
}

void displayQueue()
{
	if (front == -1 && rear == -1) {
		cout << "Underflow" << endl;
	}

	else
	{
		for (int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		cout << endl;
	}
}

int main()
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
			enqueue();
			break;

		case 2:
			dequeue();
			break;

		case 3:
			displayFront();
			break;

		case 4:
			displayQueue();
			break;

		}

	} while (option != 5);
}