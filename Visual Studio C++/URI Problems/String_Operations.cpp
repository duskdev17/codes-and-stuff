#include <iostream>
using namespace std;

void insert(char);
void deletee(void);
void update(int, char);
void search(void);
void traverse(void);
char ara[100] = "BAUST";

void traverse(void)
{
    int len = strlen(ara);
    for (int i = 0; i < len; i++) {
        cout << ara[i];
    }
}

void search(char ch)
{
    int len = strlen(ara);
    for (int i = 0; i < len; i++) {
        if (ara[i] == ch) {
            cout << "Character found at " << i << " th index";
        }
    }
    cout << endl;
}

void update(int pos, char ch)
{
    ara[pos] = ch;
}

void insert(char ch)
{
    ara[5] = ch;
    ara[6] = '\0';
}

void deletee(void)
{
    return ara[5];
}

int main() {
    traverse();
    search('B');
    update(1, 'n');
    deletee();
    insert('x');

    return 0;
}