/* #include<iostream>
using namespace std;

class Number {
private:
	int a;
	int b;
public:
	Number() {
		a = 0;
		b = 0;
	}

	Number(int n1, int n2) {
		a = n1;
		b = n2;
	}

	Number operator + (Number const obj) {
		Number add;
		add.a = a + obj.a;
		add.b = b + obj.b;
		return add;
	}

	void get_value(int &n1, int &n2) {
		n1 = a;
		n2 = b;
	}
};
int main()
{
	int c, d;

	Number num1(10, 20), num2(30, 50);
	Number num3 = num1 + num2;

	num3.get_value(c, d);

	cout << c << " " << d << endl;

	if (num1 < num2)
	{
		cout << "You are a proud BAUSTian";
	}
}
*/

#include<iostream>
using namespace std;

class Number {
private:
	int a, b;
public:
	Number() {
		a = 0;
		b = 0;
	}

	Number(int right1, int right2) {
		a = right1;
		b = right2;
	}

	Number operator + (Number ob2) {
		Number add;
		add.a = a + ob2.a;
		add.b = b + ob2.b;
		return add;
	}

	void show(int& right1, int& right2) {
		right1 = a;
		right2 = b;
	}
};

int main() {
	int c, d;

	Number ob1(10, 20), ob2(50, 20), ob3;
	ob3 = ob1 + ob2;
	ob3.show(c, d);
	cout << "c=" << c << " d=" << d << endl;

	return 0;
}
