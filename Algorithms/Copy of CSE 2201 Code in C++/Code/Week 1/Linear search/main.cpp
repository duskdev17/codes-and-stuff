#include <iostream>

using namespace std;

int main()
{
    int i, n, key;

    cout << "How many numbers? ";
    cin >> n;
    int a[n+1];
    for(i=1; i<=n; i++)
        cin >> a[i];

    cout << "Please enter key value: ";
    cin >> key;
    a[0] = key;
    i = n;
    while(a[i] != key)
        i--;

    if(i == 0)
        cout << "Not found!";
    else
        cout << "Found at " << i << " index.";

    return 0;
}
