#include<iostream>
using namespace std;

int main()
{
    int i, n;
    int values[1000];

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> values[i] ;
    }

    for(i=0; i<n; i++)
    {
        if(values[i]==0)
        {
            cout << "NULL" << endl;
        }

        else if(values[i]%2==0)
        {
            if(values[i]>0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else if(values[i]<0)
            {
                cout << "EVEN NEGATIVE" << endl;
            }
        }

        else if(values[i]%2!=0)
        {
            if(values[i]>0)
            {
                cout << "ODD POSITIVE" << endl;
            }
            else if(values[i]<0)
            {
                cout << "ODD NEGATIVE" << endl;
            }
        }

    }
    return 0;
}
