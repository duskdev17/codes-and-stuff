//copy constructor
//Write a C++ program that adds two numbers using copy constructor.
#include <iostream>  
using namespace std;
class sum {
public:
    int x, y, s;
    sum(int m, int n) {
        x = m;
        y = n;
    }

    sum(sum& i) {
        s = i.x + i.y;
    }
};

int main() {
    int a, b;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    sum ob1(a, b);
    sum ob2(ob1);
    cout << "Sum: " << ob2.s << endl;

    return 0;
}