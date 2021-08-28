#include <iostream>
using namespace std;

struct s {
    int i;
}s1;

union u {
    int j;
};
class a {

private:
    char name[100] = "POP";

public:
    int x;
    float y;

    a(void) {
        cout << "printing from default const. " << endl << "Value of x is : " << x << endl << endl;
    }
    a(int y)
    {
        x = y;
        cout << " printing form Parameterized const." << endl << "Value of x is : " << x << endl;
    }
    a(float f)
    {
        y = f;
        cout << " printing form Parameterized const." << endl << "Value of y is : " << y << endl;
    }
    void printpe(void)
    {
        cout << name << endl;
    }
};

class b : public a {

};

int main() {
    a o;
    o.printpe();

    b ob;
    ob.printpe();
    s1.i = 100;
    cout << "Value of struct member : " << s1.i << endl;
    union u u1;
    u1.j = 200;
    cout << "Value of struct member : " << u1.j << endl;

    int i;
    float j;
    char x;

    i = 11000;
    x = '4';
}