//falsePostion method -- Regula Falsi Method
#include<iostream>
using namespace std;

double func(double x)
{
    //given equation
    return x * x * x + 2 * x + 2;
}

void falsePos(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have assumed a and b incorrectly\n";
        return;
    }
    double c = a;
    for (int i = 0; i < 10000; i++)
    {
        //formula
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (func(c) == 0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is :" << c;
}

int main()
{
    double a = 1, b = -2;

    falsePos(a, b);

    return 0;
}