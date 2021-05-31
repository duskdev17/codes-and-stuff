#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int amt,total;

    cin >> amt;
    cout << amt << endl;

    total = amt/100; // total = 5.76

    cout << total << " nota(s) de R$ 100,00" << endl; // 5

    amt = amt - (total*100); //76
    total = amt/50; //1

    cout << total << " nota(s) de R$ 50,00" << endl; //1

    amt = amt - (total*50);
    total = amt/20;

    cout << total << " nota(s) de R$ 20,00" << endl;

    amt = amt - (total*20);
    total = amt/10;

    cout << total << " nota(s) de R$ 10,00" << endl;

    amt = amt - (total*10);
    total = amt/5;

    cout << total << " nota(s) de R$ 5,00" << endl;

    amt = amt - (total*5);
    total = amt/2;

    cout << total << " nota(s) de R$ 2,00" << endl;

    amt = amt - (total*2);
    total = amt/1;

    cout << total << " nota(s) de R$ 1,00" << endl;

    return 0;
}
