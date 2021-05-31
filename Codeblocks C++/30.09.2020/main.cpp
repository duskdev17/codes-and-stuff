#include<iostream>
#include<string>
#include<memory>
using namespace std;

class test{
public:
    test(){
        cout << "Successful" << endl;
    }
};

int main(){
    test* a = new test();

    test();

    delete a;
}
