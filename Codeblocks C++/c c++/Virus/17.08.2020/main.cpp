#include<iostream>
using namespace std;
//base class
class A{
private:
    int i;
public:
    void set_i(int n);
    int get_i();
};
//derived class
class D : public A{
private:
    int j;
public:
    void set_j(int n);
    int mul();
};

void A :: set_i(int n){
    i = n;
}

int A :: get_i(){
    return i;
}

void D :: set_j(int n){
    j = n;
}
int D :: mul(){
    return j * get_i();
}


int main(){
    D ob1;

    ob1.set_i(10);
    ob1.set_j(30);

    cout << ob1.mul() << endl;

    return 0;
}

