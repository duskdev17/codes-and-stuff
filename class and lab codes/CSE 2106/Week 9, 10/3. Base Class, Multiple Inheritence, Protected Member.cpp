//week 10 - base class access control, Inheritance and Protected Member, Inheriting multiple base classes
//Write a C++ program that multiplies 3 number
#include<iostream>
using namespace std;

class class1 {
protected:
    int x;
public:
    void setA()
    {
        cout << "\t\tEnter First Value: ";
        cin >> x;
    }
};

class class2 : public class1 {
protected:
    int y;
public:
    void setB()
    {
        cout << "\t\tEnter Second Value: ";
        cin >> y;
    }
};

class class3 {
protected:
    int z;
public:
    void setC()
    {
        cout << "\t\tEnter Third Value: ";
        cin >> z;
    }
};

class class4 : public class2, public class3 {
protected:
    int d;
public:
    void multiply()
    {
        setA();
        setB();
        setC();
        cout << "\t\tMultiplication Result: " << x * y * z << endl;
    }
};

int main() {
    class4 ob;
    ob.multiply();
    return 0;
}