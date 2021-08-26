#include <iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

char arr[100] = "BAUST";

void showMenu();
void traverse(int);
void insertFirst(char, int);
void insertLast(char, int);
void insertPosition(char, int, int);
void deleteFirst(void);
void deleteLast(int);
void deletePos(char, int);
void update(int, char, int);
void search(char, int);


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


void traverse(int len)
{
    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void insertFirst(char ch, int len)
{
    int i;
    arr[0] = ch;

    for (i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void insertLast(char ch, int len)
{
    len++;
    arr[5] = ch;
    arr[6] = '\0';

    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void insertPosition(char ch, int pos, int len) {
    arr[pos] = ch;

    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void deleteFirst(void)
{
    int i;
    for (i = 0; i < 5; i++) {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < 4; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void deleteLast(int len) {
    int i;
    arr[len] = NULL;

    for (i = 0; i < len - 1; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void deletePos(char ch, int len) {
    int i;
    for (i = 0; i < len; i++)
        if (arr[i] == ch)
            break;

    if (i < len)
    {
        len = len - 1;
        for (int j = i; j < len; j++)
            arr[j] = arr[j + 1];
    }

    for (i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void update(int pos, char ch, int len)
{
    arr[pos] = ch;

    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void search(char ch, int len)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == ch) {
            cout << "Character found at " << i << " th index";
        }
    }
    cout << endl;
}


int main() {
    int len, pos=0, option;
    char ch;

    len = strlen(arr);

    do {
        showMenu();
        cout << "Option:";	//user promt for chosing action
        cin >> option;

        system("cls");

        //Menu
        switch (option) {
        case 1:
            //traverse
            traverse(len);
            break;

        case 2:
            //insert First
            cout << "Enter a character to insert first: ";
            cin >> ch;
            insertFirst(ch, len);
            break;

        case 3:
            //insert Last
            cout << "Enter a character to insert last: ";
            cin >> ch;
            insertLast(ch, len);
            break;

        case 4:
            //insert Position
            cout << "Enter a character and position sequentially: ";
            cin >> ch >> pos;
            insertPosition(ch, pos, len);
            break;

        case 5:
            //delete First
            cout << "Deleting first character.." << endl;
            deleteFirst();
            break;

        case 6:
            //delete Last
            cout << "Deleting last character.." << endl;
            deleteLast(len);
            break;

        case 7:
            //delete Position
            cout << "Enter the character to be deleted: ";
            cin >> ch;
            deletePos(ch, len);
            break;

        case 8:
            //update
            cout << "Enter position and character sequentially: ";
            cin >> pos >> ch;
            update(pos, ch, len);
            break;

        case 9:
            //search
            cout << "Enter a character to search: ";
            cin >> ch;
            search(ch, len);
            break;
        }
    } while (option != 10);

    return 0;
}