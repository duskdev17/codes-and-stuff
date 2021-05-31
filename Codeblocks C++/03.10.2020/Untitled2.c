#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double a, b, c, d, xp, xn;

    cin >> setprecision(1);
    cin >> a >> b >> c;

    d = (b*b - 4*a*c);

    if( d<0 || a==0 )
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        xp = (-b + sqrt(d))/(2*a);
        xn = (-b - sqrt(d))/(2*a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << xp << endl;
        cout << "R2 = " << xn << endl;
    }

    return 0;
}
