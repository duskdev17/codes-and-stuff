#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, k;
    cout << "How many activity? ";
    cin >> n;
    int s[n], f[n]; //t[n]
    vector <int> A;

    for(i = 0; i < n; i++)
    {
        cout << "Activity " << i;
        cout << "\nStarting time: ";
        cin >> s[i];
        cout << "Finishing time: ";
        cin >> f[i];
        //cout << endl;
    }

    A.push_back(0);
    k = 0;
    for(i = 1; i < n; i++)
    {
        if(s[i] >= f[k])
        {
            A.push_back(i);
            k = i;
        }
    }

    cout << "Optimal solution will have following activity.\n";
    for(i = 0; i < A.size(); i++)
        cout << A[i] << " ";

    return 0;
}
