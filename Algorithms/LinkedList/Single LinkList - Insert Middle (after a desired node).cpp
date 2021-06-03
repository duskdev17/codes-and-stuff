//Single LinkList - Insert Middle (after a desired node)
#include<iostream>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void insertMiddle(int num) {
	//create a new node to be inserted 
	struct node* newItem;
	newItem = (struct node*)malloc(sizeof(struct node));
	newItem->value = 10;
	newItem->next = NULL;

	// set prev to point to the desired node of the list 
	struct node* prev = head;
	while (prev->value != num) {
		prev = prev->next;
	}
	newItem->next = prev->next;
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
	insertMiddle(10);
	printList();
}