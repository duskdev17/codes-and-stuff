#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, positive = 0, negative = 0, even = 0, odd = 0, values[10];

    cin >> setprecision(1);
    for(i=0; i<5; i++)
    {
        cin >> values[i];
    }

    for(i=0; i<5; i++)
    {
        if(values[i]>0)
        {
            positive++;
            if(values[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        else if(values[i]<0){
            negative++;
            if(values[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        else if(values[i]==0){
            even++;
        }

    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
}






