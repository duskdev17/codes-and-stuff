#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int code, quantity;
    double price;


    cin >> code >> quantity;

    cout << fixed << setprecision(2);

    if ( code == 1 )
    {
        price = quantity*4.00;
        cout << "Total: R$ " << setprecision(2) << price << endl;
    }
    else if ( code == 2 )
    {
        price = quantity*4.50;
        cout << "Total: R$ " << setprecision(2) << price << endl;
    }
    else if ( code == 3 )
    {
        price = quantity*5.00;
        cout << "Total: R$ " << setprecision(2) << price << endl;
    }
    else if ( code == 4 )
    {
        price = quantity*2.00;
        cout << "Total: R$ " << setprecision(2) << price << endl;
    }
    else if ( code == 5 )
    {
        price = quantity*1.50;
        cout << "Total: R$ " << setprecision(2) << price << endl;
    }

    return 0;
}
