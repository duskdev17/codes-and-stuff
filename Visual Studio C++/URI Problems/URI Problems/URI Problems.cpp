#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void evenOddSort(int arr[], int n) {
	vector<int> evenArr;
	vector<int> oddArr;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			evenArr.push_back(arr[i]);
		}
		else {
			oddArr.push_back(arr[i]);
		}
	}

	sort(evenArr.begin(), evenArr.end());
	sort(oddArr.begin(), oddArr.end(), greater<int>());

	int i = 0;
	for (int j = 0; j < evenArr.size(); j++)
		arr[i++] = evenArr[j];
	for (int j = 0; j < oddArr.size(); j++)
		arr[i++] = oddArr[j];
}

int main() {
	int arr[100], n=0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	void evenOddSort(int arr, int n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}