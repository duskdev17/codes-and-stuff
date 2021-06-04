//Single LinkedList - Delete Any (Cont.)
#include<iostream>
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
	//insert the new node at the head 
	newItem->next = head;
	head = newItem;
}

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
	int n, value, delValue;

	cout << "Enter how many elements you want to push to the list: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> value;
		insertHead(value);
	}

	cout << "Your list" << endl;
	printList();

	cout << "\nEnter a value to delte from the list: ";
	cin >> delValue;
	deleteAny(delValue);

	cout << endl;
	cout << "Your list after deletion: " << endl;
	printList();

}
