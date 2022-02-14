//734A - Anton and Danik
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int n, countA = 0, countD = 0;

	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			countA++;
		}
		else if (s[i] == 'D') {
			countD++;
		}
	}

	if (countA == countD) {
		cout << "Friendship" << endl;
	}
	else if (countA > countD) {
		cout << "Anton" << endl;
	}
	else if (countA < countD) {
		cout << "Danik" << endl;
	}

	return 0;
}