//Doubly Linked List -- Deletion
#include<iostream>
#include<stdio.h>
using namespace std;

struct dnode {
	struct dnode* prev;
	int value;
	struct dnode* next;
} head;

void deleteNode(struct dnode* old) {
	if (head == old) /* If node to be deleted is head node */
		head = old->next;

	/* Change next only if node to be deleted is NOT the last node */
	if (old->next != NULL)
		old->next->prev = old->prev;

	/* Change prev only if node to be deleted is NOT the first node */
	if (old->prev != NULL)
		old->prev->next = old->next;

	free(old); /* Finally, free the memory occupied by old*/
	return;
}

int main() {
	deleteNode(head);
}