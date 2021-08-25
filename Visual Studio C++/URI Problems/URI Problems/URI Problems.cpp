#include <iostream>
using namespace std;

int a[5] = { 10,20,30,40,50 };

void traverse(int);
void insertFirst(int);
void insertLast(int);
void insertPosition(int, int);
void deleteFrist(void);
void deleteLast(void);
void deletePos(int);
void update(int, int);
void search(int, int);


void traverse(int n)
{
    int i;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void insertFirst(int)
{
    int i;

}

void insetLast(int) {

}

void insertPosition(int, int) {

}

void deleteFirst(void)
{
    int i;
    for (i = 0; i < 5; i++) {
        a[i] = a[i + 1];
    }
    for (i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
}

void deleteLast(void)
{

}



void deleteLast(void) {

}

void deletePos(int) {

}

void update(int value, int index)
{
    for (int i = 0; i < 5; i++) {
        if (i == index)
            a[i] = value;
    }
}

void search(int value, int n)
{
    int i;
    for (i = 0; i <= 4; i++) {
        if (a[i] == value) {
            cout << "Element found in " << i << " th index !!" << endl;
        }
    }
}


int main() {
    traverse(5);
    cout << endl;
    int value, index;
    cout << "Enter value to search : ";
    cin >> value;
    search(value, 5);
    cout << endl;
    cout << "Enter the value to be updated : ";
    cin >> value;
    cout << "Enter the index number to be updated : ";
    cin >> index;
    update(value, index);
    deleteFirst();
}

