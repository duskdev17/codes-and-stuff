//URI 1096
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a = 1, b = 7;

	for (int i = 0; i < 15; i++) {
		cout << "I=" << a << " J=" << b << endl;
		b--;
		if (b == 4) {
			a += 2;
			b = 7;
		}
		if (a > 9 && b < 5) {
			break;
		}
	}

	return 0;
}
