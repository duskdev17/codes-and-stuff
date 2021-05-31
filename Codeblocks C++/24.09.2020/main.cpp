#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:" << endl;
    cin >> age;

    try
    {
        if(age > 18)
        {
            cout << "Acess grated - You are old enough" << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch(int age)
    {
        cout << "Acess Denied. -You are not authorized" << endl;
    }
    return 0;
}
