//Doubly Linked List -- Insert (First)
#include<iostream>
using namespace std;

struct dnode {
	struct dnode* prev;
	int value;
	struct dnode* next;
}*head, * last;

void insert_begning(int data) {
	struct dnode* newItem, * temp;
	newItem = (struct dnode*)malloc(sizeof(struct dnode));
	newItem->value = data;
	if (head == NULL) {
		head = newItem; head->prev = NULL;
		head->next = NULL; last = head;
	}
	else {
		temp = newItem;
		temp->prev = NULL; temp->next = head;
		head->prev = temp; head = temp;
	}
}

void printList()
{
	if (head == NULL) // no list at all 
		cout << "List is empty";
	return;
	struct dnode* cur = head;
	while (cur != NULL)
	{
		printf("%d \t", cur->value);
		cur = cur->next;
	}
}

int main() {
	insert_begning(22);
	insert_begning(22);
	insert_begning(22);

	printList();

	return 0;
}
