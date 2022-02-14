#include<iostream>
using namespace std;

int main() {
	int n = 0, a = 1, b = 1, c = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << a << " " << b << " " << c << endl;
		a = a + 1;
		b = a * a;
		c = a * a * a;
	}

	return 0;
}
