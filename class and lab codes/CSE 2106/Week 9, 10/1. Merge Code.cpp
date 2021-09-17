//Merge Code -- Operator Overloading, Base Class Acess Control, Inheritance and Protected Member, Inheriting Multiple Base Class, Constructor Destructor Inheritance
//Write a C++ program that stores a market, customer and product data and calculates customers money after buying a product.
#include<iostream>
using namespace std;

class Market {
private:
	string marketName;
	string marketAddress;
public:
	Market() {
		cout << "Enter Market Name: ";
		cin >> marketName;

		cout << "Enter Market Adress: ";
		cin >> marketAddress;
	}
	void display() {
		cout << marketName << " " << marketAddress << endl;
	}
};

class product {
protected:
	string productName;
	int price;
public:
	product() {
		cout << "Enter Product Name: ";
		cin >> productName;
		cout << "Enter Product Price: ";
		cin >> price;
	}

	void display() {
		cout << productName << " " << price << endl;
	}
};

class customer : public Market, public product {
private:
	string customerName;
	int money;
public:
	customer() {
		cout << "Enter Customer Name: ";
		cin >> customerName;
		cout << "Enter Customer Money: ";
		cin >> money;
	}

	void print() {
		Market::display();
		product::display();
		cout << customerName << " " << money << endl;
	}

	void operator+(customer c) {
		cout << "They spend in total:" << price + c.price << endl;

		money = money - price;
		if (money >= 0) {
			cout << "Customer1 Have: " << money << endl;
		}
		else {
			cout << "Customer 1 doesn't have enough money" << endl;
		}

		c.money = c.money - c.price;

		if (c.money >= 0) {
			cout << "Customer2 Have: " << c.money << endl;
		}
		else {
			cout << "Customer 2 doesn't have enough money" << endl;
		}
	}
};

int main() {
	customer c1, c2;
	c1 + c2;
}
