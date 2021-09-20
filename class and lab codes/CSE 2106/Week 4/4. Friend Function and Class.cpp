//Friend Function and Class
//Write a c++ program that adds two numbers using friend function
#include<iostream>
using namespace std;

class friendFunc {
private:
    int firstNum, secondNum, sum;
public:
    void inputData() {
        cout << "Enter First Number: ";
        cin >> firstNum;

        cout << "Enter Second Number: ";
        cin >> secondNum;
    }

    void displayResult() {
        cout << "Result: " << sum;
    }

    friend void sum(friendFunc& f);
};

void sum(friendFunc& f)
{
    f.sum = f.firstNum + f.secondNum;
}

void main() {
    friendFunc f;

    f.inputData();
    sum(f);
    f.displayResult();

}
