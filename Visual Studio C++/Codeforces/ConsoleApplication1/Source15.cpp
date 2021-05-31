//59A - Word
#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int upper = 0, lower = 0;

	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			lower++;
		}
		else if (word[i] >= 'A' && word[i] <= 'Z') {
			upper++;
		}
	}

	if (upper > lower) {
		for (int i = 0; i < word.size(); i++) {
			putchar(toupper(word[i]));
		}
	}
	else if (upper <= lower) {
		for (int i = 0; i < word.size(); i++) {
			putchar(tolower(word[i]));
		}
	}
}