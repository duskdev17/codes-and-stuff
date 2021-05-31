#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a, b, c, P, area;

    cin >> setprecision(1);
    cin >> a >> b >> c;

    if( (a+b) > c  && (a+c) > b && (b+c) > a ){
        P = a + b + c;

        cout << "Perimetro = " << fixed << setprecision(1) << P << endl;
    }
    else if( (a+b) <= c || (a+c) <= b || (b+c) <= a){
        area = ((a+b)/2) * c;

        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }

    return 0;
}
