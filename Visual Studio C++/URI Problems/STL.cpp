/*#include<iostream>
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool func(int a, int b) {
	return a > b;
}

int main() {
	vector <int> vec;
	vector <int>::iterator it;

	vec.push_back(12);
	vec.push_back(10);
	vec.push_back(11);
	vec.push_back(50);
	vec.push_back(9);

	sort(vec.begin(), vec.begin() + 3);

	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << "	";
	}

	return 0;
}
*/
#include<iostream>
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

int main() {
	list <double> listname(5, 3000.49);
	list <double>::iterator it;

	for (it = listname.begin(); it != listname.end(); it++) {
		cout << *it << "	";
	}
}