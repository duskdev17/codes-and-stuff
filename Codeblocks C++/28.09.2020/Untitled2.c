#include <iostream>

class MyClass {
    int a, b, c, d;

public:
    MyClass(int i,int j)
    {
        a = i;
        b = i;
        c = j;
        d = j;
    }
    void display()
    {
        std::cout << " a = " << a << " b = " << b << "\n";
        std::cout << " c = " << c << " d = " << d << "\n";
    }
};

int main()
{
    MyClass object(10,20);
    object.display();

    // Single parameter conversion constructor is invoked.
    object = {20,10};
    object.display();
    return 0;
}
