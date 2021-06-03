//Single LinkedList - Delete Any (Cont.)
#include<iostream>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void deleteAny(int x) {
	if (head == NULL) //list empty 
		return;
	struct node* cur = head;
	struct node* prev = NULL;
	while (cur->value != x) {
		prev = cur;
		cur = cur->next;
	}
	if (prev != NULL)
		prev->next = cur->next;
	free(cur);
}

int main() {

}
