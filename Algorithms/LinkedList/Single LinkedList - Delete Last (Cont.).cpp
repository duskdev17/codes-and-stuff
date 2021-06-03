//Single LinkedList - Delete Last (Cont.)
#include<iostream>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void deleteTail() {
	if (head == NULL) //list empty 
		return;
	struct node* cur = head;
	struct node* prev = NULL;
	while (cur->next != NULL) {
		prev = cur;
		cur = cur->next;
	}
	if (prev != NULL)
		prev->next = NULL;
	free(cur);
}