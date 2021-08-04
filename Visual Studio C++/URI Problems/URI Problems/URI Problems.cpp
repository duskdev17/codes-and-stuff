//task1 
#include <iostream>
#include <string.h>
using namespace std;

char* cp(char[], int);
char ara[100];
int main() {
    int n;
    cout << "Enter message to be encrypted : ";
    cin.get(ara, 100);
    cout << "Enter shift amount : ";
    cin >> n;
    cout << "\nEncrypted message : " << cp(ara, n);
    return 0;
}

char* cp(char ara[200], int n)
{
    int len = strlen(ara), i;
    for (i = 0; ara[i] != '\0'; i++) {
        if ((ara[i] >= 'A' && ara[i] <= 'Z') || (ara[i] >= 'a' && ara[i] <= 'z')) {
            ara[i] = ara[i] + n;
        }
        else {
            ara[i] = ara[i];
        }
    }
    return ara;
}