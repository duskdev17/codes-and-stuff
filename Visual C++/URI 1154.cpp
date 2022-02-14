//URI 1154
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double age[1000], count = 0, sum = 0;

	for (int i = 0; i < 100; i++) {
		cin >> age[i];
		if (age[i] < 0) {
			break;
		}
		count++;
	}

	for (int i = 0; i < count; i++) {
		sum = sum + age[i];
	}

	cout << fixed << setprecision(2) << sum / count << endl;

	return 0;
}