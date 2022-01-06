#include <iostream>

using namespace std;

int main()
{
    int i, n, max_value;

    cout << "How many numbers? ";
    cin >> n;
    int a[n];

    cout << "Please enter the numbers: ";
    for(i=0; i<n; i++)
        cin >> a[i];

    max_value = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i] > max_value)
            max_value = a[i];
    }

    cout << "The maximum value is " << max_value;

    return 0;
}
