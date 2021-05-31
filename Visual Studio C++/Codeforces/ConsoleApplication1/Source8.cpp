//263A - Beautiful Matrix
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>

using namespace std;



int main() {
	int temp[6][6];
	int x = 0;
	int y = 0;
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			scanf("%d", &temp[i][j]);
			if (temp[i][j] == 1) {
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n", abs(x - 3) + abs(y - 3));
	//system("pause");
	return 0;
}