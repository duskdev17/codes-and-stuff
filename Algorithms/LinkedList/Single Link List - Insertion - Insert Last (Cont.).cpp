//Single Link List - Insertion - Insert Last (Cont.)
#include<iostream>
#include<string.h>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void insertTail() {
	//create a new node to be inserted 
	struct node* newItem;
	newItem = (struct node*)malloc(sizeof(struct node));

	newItem->value = 10;
	newItem->next = NULL;

	// set prev to point to the last node of the list 
	struct node* prev = head;
	while (prev->next != NULL)
		prev = prev->next;
	newItem->next = NULL;
	prev->next = newItem;
}

void printList()
{
	if (head == NULL) // no list at all 
		return;
	struct node* cur = head;
	while (cur != NULL)
	{
		printf("%d \t", cur->value);
		cur = cur->next;
	}
}

int main() {
	insertTail();
	printList();
}