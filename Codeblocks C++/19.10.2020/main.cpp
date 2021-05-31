#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double numbers[6];
    int i, temp = 0;

    for(i=0; i<6; i++){
        cin >> setprecision(1);
        cin >> numbers[i];
    }

    for(i=0; i<6; i++){
        if (numbers[i] >= 0){
            temp++;
        }
    }

    cout << temp << " valores positivos" << endl;
}
