#include<bits/stdc++.h>

using namespace std;

int used[10];
int position[10];

void permutation(int index, int n)
{
    if(index == n) //complete
    {
        //print the solution
        for(int i = 0; i < n; i++)
            cout << position[i] << " ";
        cout << endl;

        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(used[i] == 0)
        {
            used[i] = 1;
            position[index] = i;
            permutation(index+1, n);
            used[i] = 0;
        }
    }
}

int main()
{
    int n;

    cout << "How many numbers?";
    cin >> n;

    for(int i = 0; i < n; i++)
        used[i] = 0;

    cout << "Permutation of first " << n << " numbers are given bellow.\n";

    permutation(0, n);

    return 0;
}
