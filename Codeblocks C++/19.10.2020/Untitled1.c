
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double salary, tax;

    cin >> setprecision(2);
    cin >> salary;

    cout << fixed << setprecision(2);

    if( salary>=0.00 && salary<=2000.00 ){
        cout << "Isento" << endl;
    }
    else if( salary>=2000.01 && salary<=3000.00 ){
            tax = (salary - 2000)*.08;
        cout << "R$ " << tax << endl;
    }
    else if( salary>=3000.01 && salary<=4500.00 ){
            tax = (salary - 3000)*.18 + 1000*.08;
        cout << "R$ " << tax <<  endl;
    }
    else if( salary>4500 ){
            tax = (salary - 4500)*.28 + 1000*.08 + 1500*.18;
        cout << "R$ " << tax <<  endl;
    }
 return 0;
}
