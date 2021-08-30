//Queue: First in First out
#include<iostream>
#define N 5
using namespace std;

int queue[N], front = -1, rear = -1;

void enqueue(int x){
	if (rear == N - 1){
		cout << "Overflow" << endl;
	}

	else if ((front == -1) && (rear == -1)){
		front = rear = 0;
		rear++;
		queue[rear] = x;
	}

	else {
		rear++;
		queue[rear] = x;
	}
}

void dequeue() {
	if ((front == -1) && (rear == -1)){
		cout << "Underflow" << endl;
	}

	else if (front == rear) {
		front = rear = -1;
	}

	else {

		front++;
		cout << "Front of the queue: " << queue[front] << endl;
	}
}

void display() {
	int i;

	if ((front == -1) && (rear == -1)) {
		cout << "Empty" << endl;
	}

	else {
		for (i = front; i <= rear; i++){
			cout << queue[i] << " " << endl;
		}
	}
}

void display_top(){
	if ((front == -1) && (rear == -1)) {
		cout << "Empty" << endl;
	}

	else{
		cout << "Queue Front: " << queue[front] << endl;
	}
}

int main(){
	enqueue(2);
	enqueue(5);
	enqueue(-1);
	dequeue();
	display();
	//Top()
	//dequeue();
	//display();
}