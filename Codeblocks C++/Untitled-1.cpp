#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x*x*x + 2*x + 2;
}
void falsePos(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout<<"You have not assumed right a and b\n";
        return;
    }
    double c = a;
    for (int i=0; i < 10000; i++)
    {
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
        if (func(c)==0)
            break;
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout<<"The value of root is :"<<c;
}
int main()
{
    double a =-200, b = 300;
    falsePos(a, b);
    return 0;
}