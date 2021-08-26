#include <iostream>
using namespace std;

int a[5] = { 10, 20, 30, 40, 50 };

void showMenu();
void traverse(int);
void insertFirst(int);
void insertLast(int, int);
void insertPosition(int, int, int);
void deleteFirst(void);
void deleteLast(int);
void deletePos(int, int);
void update(int, int);
void search(int, int);

void showMenu() {
    cout << "*******MENU*******" << endl;
    cout << "1. Traverse" << endl;
    cout << "2. Insert First" << endl;
    cout << "3. Insert Last" << endl;
    cout << "4. Insert Position" << endl;
    cout << "5. Delete First" << endl;
    cout << "6. Delete Last" << endl;
    cout << "7. Delete Position" << endl;
    cout << "8. Update" << endl;
    cout << "9. Search" << endl;
    cout << "10. Exit" << endl;
    cout << "******************" << endl;
}

void traverse(int n)
{
    int i;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertFirst(int value)
{
    int i;
    a[0] = value;

    for (i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertLast(int value, int arrSize) {
    int i;
    a[arrSize - 1] = value;

    for (i = 0; i < arrSize; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertPosition(int value, int position, int arrSize) {
    int i;
    for (i = arrSize - 1; i >= position - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[position - 1] = value;

    for (i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
    cout << endl;
}

void deleteLast(int arrSize) {
    int i;
    a[arrSize] = NULL;

    for (i = 0; i < arrSize - 1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void deletePos(int value, int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++)
        if (a[i] == value)
            break;

    if (i < arrSize)
    {
        arrSize = arrSize - 1;
        for (int j = i; j < arrSize; j++)
            a[j] = a[j + 1];
    }

    for (i = 0; i < arrSize; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void update(int value, int index)
{
    for (int i = 0; i < 5; i++) {
        if (i == index)
            a[i] = value;
    }
    cout << endl;
}

void search(int value, int n)
{
    int i;
    for (i = 0; i <= 4; i++) {
        if (a[i] == value) {
            cout << "Element found in " << i << " th index !!" << endl;
        }
    }
    cout << endl;
}


int main() {
    int option, value, index, position;

    int arrSize = sizeof(a) / sizeof(a[0]);

    do {
        showMenu();
        cout << "Option:";									  //user promt for chosing action
        cin >> option;

        system("cls");

        //Main code
        switch (option) {
        case 1:
            //traverse
            traverse(5);
            break;

        case 2:
            //insert First
            cout << "\nEnter value to insert first : ";
            cin >> value;
            insertFirst(value);
            break;

        case 3:
            //insert Last
            cout << "\nEnter value to insert Last : ";
            cin >> value;
            insertLast(value, arrSize);
            break;

        case 4:
            //insert Position
            cout << "\nEnter value and postion: ";
            cin >> value >> position;
            insertPosition(value, position, arrSize);
            break;

        case 5:
            //delete First
            cout << "\nDeleting first element.." << endl;
            deleteFirst();
            break;

        case 6:
            //delete Last
            cout << "\nDeleting last element.." << endl;
            deleteLast(arrSize);
            break;

        case 7:
            //delete specific value
            cout << "\nEnter the value from the array to be deleted: " << endl;
            cin >> value;
            deletePos(value, arrSize);
            break;

        case 8:
            //update
            cout << "Enter the value to be updated : ";
            cin >> value;
            cout << "Enter the index number to be updated : ";
            cin >> index;
            update(value, index);
            deleteFirst();
            break;

        case 9:
            //search
            cout << endl;
            cout << "Enter value to search : ";
            cin >> value;
            search(value, 5);
            cout << endl;
            break;
        }
    } while (option != 10);
}