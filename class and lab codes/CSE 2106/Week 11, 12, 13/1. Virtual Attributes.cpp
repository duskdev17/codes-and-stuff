//Week 11 - Virtual Attributes
//Write a C++ program to demonstrate Virtual Atrributes
#include <iostream>
using namespace std;

class Employee1 {
public:
    virtual void talk() {
        cout << "I'm Employee 1" << endl;
    }
};

class Employee2 : public Employee1 {
public:
    void talk() {
        cout << "I'm Employee 2" << endl;
    }
};

class Employee3 : public Employee2 {
public:
    void talk() {
        cout << "I'm Employee 3" << endl;;
    }
};

void startTalking(Employee1& p) {
    p.talk();
}

int main() {
    Employee1 e1;
    Employee2 e2;
    Employee3 e3;

    startTalking(e1);
    startTalking(e2);
    startTalking(e3);
    return 0;
}
