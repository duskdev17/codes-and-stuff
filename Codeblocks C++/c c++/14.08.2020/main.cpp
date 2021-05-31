#include <iostream >
using namespace std;

class myclass
{
    int i, j;
public:
    myclass(int a, int b);
    void show();
};

myclass::myclass(int a, int b)
{
    cout << "In constructor\n";
    i = a;
    j = b;
}

void myclass::show()
{
    cout << i << " " << j << "\n";
}


int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    // use variables to construct ob

    myclass ob(x, y);
    ob.show();

    return 0;
}
