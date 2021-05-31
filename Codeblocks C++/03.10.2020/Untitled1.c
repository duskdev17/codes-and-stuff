#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double note;
    int number;

    cin >> setprecision(2);
    cin >> note;

    number = note/100;

    cout << "NOTAS:" << endl;
    cout << number << " nota(s) de R$ 100.00" << endl;

    note = note - (number*100);
    number = note/50;

    cout << number << " nota(s) de R$ 50.00" << endl;

    note = note - (number*50);
    number = note/20;

    cout << number << " nota(s) de R$ 20.00" << endl;

    note = note - (number*20);
    number = note/10;

    cout << number << " nota(s) de R$ 10.00" << endl;

    note = note - (number*10);
    number = note/5;

    cout << number << " nota(s) de R$ 5.00" << endl;

    note = note - (number*5);
    number = note/2;

    cout << number << " nota(s) de R$ 2.00" << endl;

    note = note - (number*2);
    number = note/1;

    cout << "MOEDAS:" << endl;
    cout << number << " moeda(s) de R$ 1.00" << endl;

    note = note - (number*1);
    number = note/.50;

    cout << number << " moeda(s) de R$ 0.50" << endl;

    note = note - (number*.50);
    number = note/.25;

    cout << number << " moeda(s) de R$ 0.25" << endl;

    note = note - (number*.25);
    number = note/.10;

    cout << number << " moeda(s) de R$ 0.10" << endl;

    note = note - (number*.10);
    number = note/.05;

    cout << number << " moeda(s) de R$ 0.05" << endl;

    note = note - (number*.05);
    number = note/.01;

    cout << number << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
