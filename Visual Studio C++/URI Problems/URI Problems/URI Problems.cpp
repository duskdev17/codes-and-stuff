#include<iostream>
#define SIZE 100
using namespace std;

int main() {
	int n, even[SIZE] = { 0 }, odd[SIZE], number[SIZE], evenCount = 0, oddCount = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number[i];

		if (number[i] % 2 == 0) {
			evenCount = evenCount+1;
		}
		else if (number[i] %2!= 0) {
			oddCount = oddCount+1;
		}
	}


	for (int i = 0; i < n; i++) {
		if (number[i] % 2 == 0) {
			for (int j = 0; j < evenCount; j++) {
				even[j] = number[i];
			}
		}
		else if(number[i]%2 != 0){
			for (int k = 0; k < oddCount; k++) {
				odd[k] = number[i];
			}
		}
	}


	for (int i = 0; i < evenCount; i++) {
		//cout << number[i] << " " << endl;
		cout << even[i] << endl;
	}
}