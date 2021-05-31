#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num1 ;
    cin >> num2 ;

    for (i=0; i<1000; i++)
    {
        if (n>1 && n<9)
        {
            if (num == 1)
            {
                cout << "one" << endl;
            }
            else if (num == 2)
            {
                cout << "two" << endl;
            }
            else if (num == 3)
            {
                cout << "three" << endl;
            }
            else if (num == 4)
            {
                cout << "four" << endl;
            }
            else if (num == 5)
            {
                cout << "five" << endl;
            }
            else if (num == 6)
            {
                cout << "six" << endl;
            }
            else if (num == 7)
            {
                cout << "seven" << endl;
            }
            else if (num == 8)
            {
                cout << "eight" << endl;
            }
            else if (num == 9)
            {
                cout << "nine" << endl;
            }
        }
        else
        {
            if(n%2==0) {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}
