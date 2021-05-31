#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int sday, fday, sh, fh, sm, fm, ss, fs;

    cout << "Dia ";
    cin >> sday;
    cin >> sh >> sm >> ss;

    cout << "Dia ";
    cin >> fday;
    cin >> fh >> fm >> fs;

    int dur_day;
    dur_day = fday - sday;
    cout << dur_day << " dia(s)" << endl;



}
