//URI 2006
//URI 2006
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int tea, values[10], count = 0;

	cin >> tea;
	for (int i = 0; i < 5; i++) {
		cin >> values[i];
	}

	for (int i = 0; i < 5; i++) {
		if (values[i] == tea) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
