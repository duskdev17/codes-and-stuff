#include <iostream>
using namespace std;

class base1 {
    int i = 100;

public:
    void showi(void)
    {
        cout << i << endl;
    }

};

class base2 {
    int j = 200;
public:
    void showj(void)
    {
        cout << j << endl;
    }
};


class derived : public base1, public base2 {

};

int main()
{
    derived d;
    d.showi();
    d.showj();
    return 0;
}