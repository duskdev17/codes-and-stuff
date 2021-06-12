//Doubly Linked List -- Insert (Middle)
#include<iostream>
using namespace std;

struct dnode {
	struct dnode* prev;
	int value;
	struct dnode* next;
}*head, * last;

int insert_after(int data, int loc) {
	struct dnode* temp, * newItem, * temp1;
	newItem = (struct dnode*)malloc(sizeof(struct dnode));
	newItem->value = data;
	if (head == NULL) {
		head = newItem; head->prev = NULL; head->next = NULL;
	}
	else {
		temp = head;
		while (temp != NULL && temp->value != loc)
			temp = temp->next;
		if (temp == NULL)
			printf("\n%d is not present in list ", loc);
		else {
			temp1 = temp->next; temp->next = newItem; newItem->prev = temp;
			newItem->next = temp1; temp1->prev = newItem;
		}
	}
	last = head;
	while (last->next != NULL)
		last = last->next;
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
	insert_after(24, 0);

	printList();
	return 0;
}
