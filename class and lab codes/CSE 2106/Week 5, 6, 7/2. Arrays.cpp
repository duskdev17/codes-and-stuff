//week 6
//Arrays
//Write a c++ program that sorts a given array.
#include<iostream>
using namespace std;

void beforeSort(int array[], int arrSize) {
    cout << "Unsorted Array: ";

    for (int i = 0; i < arrSize; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

void bubbleSort(int array[], int arrSize) {
    int temp = 0;

    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            if (array[j] < array[i]) {
                //swap
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void afterSort(int array[], int arrSize) {
    cout << "Sorted Array: ";

    for (int i = 0; i < arrSize; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

int main()
{
    int array[1000], n;

    cout << "Enter number of elements to insert in the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    beforeSort(array, n);
    bubbleSort(array, n);
    afterSort(array, n);

    return 0;
}