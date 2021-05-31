#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char *month[1000] = {"January", "February", "March", "April", "May", "June", "July",  "August", "September", "October", "November", "December"};
    int x;
    cin >> x;

    cout << month[x-1] << endl;
}
