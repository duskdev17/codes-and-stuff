//Single Link List - Insertion - Insert First (Cont.)
#include<iostream>
#include<string.h>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void insertHead(int n) {
	//create a new node 
	struct node* newItem;
	newItem = (struct node*)malloc(sizeof(struct node));
	newItem->value = n;
	newItem->next = NULL;

	//printing the inserted value
	cout << newItem->value << endl;

	//insert the new node at the head 
	newItem->next = head;
	head = newItem;
}

int main() {
	insertHead(20);
	insertHead(21);
}