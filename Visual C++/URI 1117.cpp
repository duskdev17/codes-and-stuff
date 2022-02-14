//URI 1117
#include <stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	float nota1, nota2, media;

	do {
		cin >> nota1;
		if (nota1 < 0 || nota1>10) printf("nota invalida\n");
	} while (nota1 < 0 || nota1>10);

	do {
		cin >> nota2;
		if (nota2 < 0 || nota2>10) printf("nota invalida\n");
	} while (nota2 < 0 || nota2>10);

	media = (nota1 + nota2) / 2;
	printf("media = %.2f\n", media);

	return 0;
}


/*
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double values[100], temp=0, media=0;
	int count = 0, lmao=0;

	for (int i = 0; i < 100; i++) {
		cin >> values[i];
		lmao++;
		if (values[i] <= 0.0 || values[i] >= 10.0) {
			cout << "nota invalida" << endl;
		}

		if (values[i] >= 0.0 && values[i] <= 10.0) {
			count++;
			if (count == 2)
				break;
		}


	}

	for (int i = 0; i < lmao; i++) {
		if (values[i] >= 0.0 && values[i] <= 10.0) {
			temp = temp + values[i];
		}
	}

	media = temp / 2.0;

	cout << "media = " << fixed << setprecision(2) << media << endl;

	return 0;
}
*/