#include <iostream>
#include <iomanip>
using namespace std;

//function that does the linear search
int linear_search(int m[5], int key, int s) {
    int i = 0;

    for (int i = 0; i < s; i++) {
        if (m[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {

    //Declaration
    int n, marks[100], searchkey = 0, size;

    //Some intro and prompt texts
    cout << setw(60) << "##Binary Search##" << endl;
    cout << "Enter how many items you want to store: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "\nEnter the number to search: ";
    cin >> searchkey;

    //Figure out the size of the array
    size = sizeof(marks) / sizeof(marks[0]);
    //passing the values, searchkey and size of the array
    int result = linear_search(marks, searchkey, size);

    //Recieves the retured value and checks it for the result
    if (result == -1) {
        cout << "Item not found!" << endl;
    }
    else {
        cout << "Item found on index[" << result << "]" << endl;
    }

    return 0;
}

