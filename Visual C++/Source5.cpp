//282A. Bit++
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, count = 0;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "X++" || str == "++X") {
			count++;
		}
		else if (str == "X--" || str == "--X") {
			count--;
		}
	}

	cout << count << endl;

}