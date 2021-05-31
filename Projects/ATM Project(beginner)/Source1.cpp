#include<iostream>
using namespace std;

//This is the menu user will see
void showMenu() {
	cout << "*******MENU*******" << endl;
	cout << "1. Cheak Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "******************" << endl;
}

int main() {
	// cheak balance, deposit, withdraw, show menu
	int option;
	double balance = 500;

	do {
		showMenu();
		cout << "Option:";									  //user promt for chosing option
		cin >> option;

		system("cls");

		//Main code
		switch (option) {
		case 1: cout << "Balance is: $" << balance << endl;   //Cheaking Balance
			break;
		case 2: cout << "Deposit amount: $";					  //Depositing an amount
			double depositAmount;
			cin >> depositAmount;
			balance = balance + depositAmount;				  // Adding deposited amount
			break;
		case 3: cout << "Withdraw amount: $";					  //Withdrawing an amount
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)                    //Cheaking if the balance is enough or not
				balance = balance - withdrawAmount;
			else
				cout << "Not enough money!" << endl;
			break;
		}
	} while (option != 4);



	return 0;
}

