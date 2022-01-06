#include <iostream>

using namespace std;

int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << sum(a, b);

    return 0;
}
