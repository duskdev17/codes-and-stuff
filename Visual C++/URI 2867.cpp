#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n, a, b, digit[100];
	long int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		result = 0;
		result = pow(a, b);

		int count = 0;
		while (result != 0) {
			result = result / 10;
			count++;
		}
		digit[i] = count;
	}

	for (int i = 0; i < n; i++) {
		cout << digit[i] << endl;
	}

}