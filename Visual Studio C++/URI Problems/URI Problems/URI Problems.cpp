//Last in First out - Stack
#include<iostream>
#define N 5
using namespace std;

int stack[N];
int top = -1;

void push()
{
	int x;
	cout << "Enter data";
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

void Display_top()
	{
	if (top == -1)		cout << "Underflow" << endl;
	else
		cout << "Top item: " << stack[top] << endl;
	}

void Display(){
		int i;

		for (i = top; i >= 0; i--) {
			cout << " " << stack[i];
		}
	}void main()
{
	Push()
		Pop()
		Display()
		Display top()
		Int ch,
		Do{
		Printf(Enter choices 1. Push….)
		Scanf(“ % d”,&ch);
		Switch(ch)
		Case 1: Push()
		Break;
		Case: 2 Pop()
		Break;
		Case 3
		Case 4
		Default: Invalid choice
	}while(ch != 0)

			Getch()
}