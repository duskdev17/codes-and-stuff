#include<iostream>
#define SIZE 9
using namespace std;

int LinearSearch(int arr[], int key);

int main() {	
	int n, Arr[SIZE] = { 8,14,52,13,6,76,45,12, 7 };
	int key= 19;

	int pos = LinearSearch(Arr, key);

	if (pos == -1) {
		cout << "Key is not found in the array." << endl;
	}
	else if (pos == 1) {
		cout << "Key found at " << key << "location" << endl;
	}

}

int LinearSearch(int arr[], int sKey) {
	int i;
	for ( i = 0; i < SIZE; i++) {
		if (arr[i] == sKey) {
			return i;
		}
	}
	return -i;

}

