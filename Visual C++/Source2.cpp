//71A. Way Too Long Words
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	char word[1000];

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> word;

		if (strlen(word) > 10) {
			cout << word[0] << strlen(word) - 2 << word[strlen(word) - 1] << endl;
		}

		else {
			cout << word << endl;
		}

	}
}