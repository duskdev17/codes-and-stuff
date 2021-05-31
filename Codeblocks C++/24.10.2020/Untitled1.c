
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int x, y;
    int flag1=0, flag2=0, flag3=0;
    cin >> x >> y;

    if(x<y)
    {
        for(x=x; x<y; x++)
        {
            if(x%2!=0)
            {
                flag1 = flag1 + x;
            }
        }
        cout << flag1 << endl;
    }

    else if(x>y)
    {
        for(y=y; y<x; y++)
        {
            if(y%2!=0)
            {
                flag2 = flag2 + y;
            }
        }
        cout << flag2 << endl;
    }

    else if(x=y)
    {
        flag3 = 0;
        cout << flag3 << endl;
    }

    return 0;
}
