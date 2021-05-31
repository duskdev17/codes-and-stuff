#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
int main()
{
    int test;
    double count[200], Total, coelho = 0, rato = 0, sapo = 0;
    char name[20];

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> count[i] >> name[i];
    }

    for (int i = 0; i < test; i++)
    {
        if (name[i] == 'C') {
            coelho += count[i];
        }
        else if (name[i] == 'R') {
            rato += count[i];
        }
        else if (name[i] == 'S') {
            sapo += count[i];
        }
    }

    Total = coelho + rato + sapo;

    cout << "Total: " << Total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (coelho / Total) * 100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (rato / Total) * 100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (sapo / Total) * 100 << " %" << endl;

    return 0;
}