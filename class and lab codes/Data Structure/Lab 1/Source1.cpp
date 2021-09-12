//pyramid
#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter a number: ";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {  //for inverse j = n-i
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}