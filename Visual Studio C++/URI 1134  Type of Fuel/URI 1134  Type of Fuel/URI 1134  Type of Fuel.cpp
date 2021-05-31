#include <iostream>
using namespace std;

int main()
{
	int value[100], count = 0,alcohol = 0, gasoline = 0, diesel = 0;

	for (int i = 0; i < 1000; i++) {
		cin >> value[i];
		if (value[i] == 4) {
			break;
		}
		count++;
	}

	for (int i = 0; i <= count; i++) {
		if (value[i] == 1) {
			alcohol++;
		}
		else if (value[i] == 2) {
			gasoline++;
		}
		else if (value[i] == 3) {
			diesel++;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcohol << endl;
	cout << "Gasolina: " << gasoline << endl;
	cout << "Diesel: " << diesel << endl;

	return 0;
}