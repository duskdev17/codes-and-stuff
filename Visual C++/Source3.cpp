//158A. Next Round
#include <iostream>
using namespace std;

int main() {
	int n, k, a, b = 0, mas[10000];

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		mas[i] = a;
	}
	for (int j = 1; j <= n; j++) {
		if (mas[j] >= mas[k] && mas[j] > 0) {
			b++;
		}
	}
	cout << b;
}