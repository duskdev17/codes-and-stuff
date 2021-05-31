//	1472B - Fair Division
#include<iostream>
using namespace std;

int main() {
	int n, numCandies, weight = 0, sum = 0;


	cin >> n;

	for (int i = 0; i < n; i++) {
		int c1 = 0;
		int c2 = 0;

		cin >> numCandies;

		for (int j = 0; j < numCandies; j++) {
			cin >> weight;

			if (c1 == 1) {
				c1++;
			}
			if (c2 == 2) {
				c2++;
			}

			sum += weight;
		}

		if (sum % 2 != 0) {
			cout << "NO" << endl;
		}

		else if (c1 != c2) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
}