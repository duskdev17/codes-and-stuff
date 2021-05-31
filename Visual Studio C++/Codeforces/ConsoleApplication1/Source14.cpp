//546A - Soldier and Bananas
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int cost, budget, need, totalCost = 0;

	cin >> cost >> budget >> need;

	for (int i = 1; i <= need; i++) {
		totalCost = cost * i + totalCost;
	}

	if (totalCost > budget) {
		cout << totalCost - budget << endl;
	}
	else if (totalCost < budget) {
		cout << "0" << endl;
	}
	else if (totalCost == budget) {
		cout << "0" << endl;
	}

}

