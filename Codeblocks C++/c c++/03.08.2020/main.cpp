#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i,amount=0;

    cin >> amount ;

    int arr[amount];

    for (i=1; i<=amount; i++)
    {
        cin >> arr[i] ;
    }

    for (i=amount; i>=1; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
