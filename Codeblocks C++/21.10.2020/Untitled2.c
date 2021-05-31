#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double values[10], temp;
    int i, counter = 0;
    cin >> setprecision(1);
    for(i=0; i<6; i++)
    {
        cin >> values[i];
    }

    for(i=0; i<6; i++)
    {
        if(values[i]>0)
        {
            counter++;
            temp = temp + values[i];
        }
    }
    cout << counter << " valores pares" << endl;
    cout << fixed << setprecision(1) << temp/counter << endl;
}



