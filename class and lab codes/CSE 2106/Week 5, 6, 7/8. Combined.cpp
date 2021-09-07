//combined code - array, nested class, static class members, pointer
//write a c++ program that sorts an array in ascending order.
#include<iostream>
using namespace std;

class Class {
public:
    class nestedClass {
    public:
        static void takeInput(int* myArr, int n) {
            for (int i = 0; i < n; i++) {
                cin >> myArr[i];
            }
        }

        static void displayUnsorted(int* myArr, int n) {
            cout << "Unsorted Array: ";
            for (int i = 0; i < n; i++)
                cout << myArr[i] << " ";
            cout << endl;
        }

        void insertionSort(int* myArr, int n) {
            int temp, j;
            for (int i = 1; i < n; i++) {
                temp = myArr[i];
                j = i - 1;
                while (j >= 0 && myArr[j] > temp) {
                    myArr[j + 1] = myArr[j];
                    j = j - 1;
                }
                myArr[j + 1] = temp;
            }
        }

        void displaySorted(int* myArr, int n) {
            cout << "Sorted Array: \t";

            for (int i = 0; i < n; i++) {
                cout << myArr[i] << " ";
            }
            cout << endl;
        }
    };


};

int main() {
    int n, array[1000];

    cout << "Enter number of inputs: ";
    cin >> n;

    Class::nestedClass obj;

    Class::nestedClass::takeInput(array, n);
    Class::nestedClass::displayUnsorted(array, n);

    obj.insertionSort(array, n);
    obj.displaySorted(array, n);

    return 0;
}