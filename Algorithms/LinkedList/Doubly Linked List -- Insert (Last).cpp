//Doubly Linked List -- Insert (Last)
#include<iostream>
using namespace std;

struct dnode {
	struct dnode* prev;
	int value;
	struct dnode* next;
}*head, * last;

void insert_end(int data) {
	struct dnode* newItem, * temp = NULL;
	newItem = (struct dnode*)malloc(sizeof(struct dnode));
	newItem->value = data;
	if (head == NULL) {
		head = newItem; head->prev = NULL;
		head->next = NULL; last = head;
	}
	else {
		last = head;
		while (last != NULL) {
			temp = last;
			last = last->next;
		}
		last = newItem; temp->next = last;
		last->prev = temp; last->next = NULL;
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
		cout << "	" << cur->value;
		cur = cur->next;
	}
}

int main() {
	insert_end(20);
	insert_end(30);
	insert_end(32);

	printList();
	return 0;
}
