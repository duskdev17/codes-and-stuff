//
#include<iostream>
using namespace std;

struct node {
	int value;
	struct node* next;
};
struct node* head;

void deleteHead()
{
	struct node* cur;
	if (head == NULL) //list empty 
		cout << "List is empty";
	return;
	cur = head; // save head pointer 
	head = head->next; //advance head 
	free(cur);
}

int main() {
	deleteHead();
}