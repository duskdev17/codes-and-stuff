#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,n;
    double a[1000], b[1000], c[1000], avg[1000];

    cin >> n;

    cin >> setprecision(1);
    for(i=0; i<n; i++){
            cin >> a[i] >> b[i] >> c[i];
    }

    for(i=0; i<n; i++){
        avg[i] = ( a[i]*2 + b[i]*3 + c[i]*5 )/10;
        cout << fixed << setprecision(1) << avg[i] << endl;
    }

   return 0;
}
