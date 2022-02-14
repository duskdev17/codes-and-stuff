/*#include <iostream >
using namespace std;

// This is a function template.
template <class X>
void swapargs(X &a, X &b) {
	X temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int i = 10, j = 20;
	float x = 10, y = 23.3;

	cout << "Original i, j: " << i << ’ ’ << j << endl;
	cout << "Original x, y: " << x << ’ ’ << y << endl;

	swapargs(i, j); // swap integers
	swapargs(x, y); // swap floats

	cout << "Swapped i, j: " << i << ’ ’ << j << endl;
	cout << "Swapped x, y: " << x << ’ ’ << y << endl;

	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;

template <typename T>
void swapargs(T a, T b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

int main() {
	int x = 10, y = 20;
	float i = 100.123, j = 200.321;

	//print(i,j);

	cout << "Value of X,Y " << x << " " << y << endl;
	cout << "Value of I,J " << i << " " << j << endl;

	swapargs(x, y);
	//swap(i,j);

	cout << "After swap of X,Y " << x << " " << y << endl;
	cout << "After swap of I,J " << i << " " << j << endl;

	return 0;
}
*/

#include<iostream>
using namespace std;

template<class T>
class show {
private:
	T temp;
public:
	T lmao(T a, T b) {
		cout << a << " " << b << endl;
	}
	T swapped(T a, T b) {
		temp = a;
		a = b;
		b = temp;
		cout << a << " " << b << endl;
	}
};

int main() {
	show <int> ob;
	ob.lmao(10, 20);
	show <float> ob2;
	ob2.swapped(10.22, 20.33);

	return 0;
}
