#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, counter = 0, values[10];
    cin >> setprecision(1);
    for(i=0; i<5; i++)
    {
        cin >> values[i];
    }

    for(i=0; i<5; i++)
    {
        if(values[i]%2==0)
        {
            counter++;
            //temp = temp + values[i];
        }
    }
    cout << counter << " valores pares" << endl;
    //cout << fixed << setprecision(1) << temp/counter << endl;
}



