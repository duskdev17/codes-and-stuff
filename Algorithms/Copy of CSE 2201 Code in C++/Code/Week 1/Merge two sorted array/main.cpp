#include <iostream>

using namespace std;

int main()
{
    int a1[] = {2, 5, 9, 11, 20};
    int a2[] = {3, 7, 10, 14, 25};

    int n1 = 5, n2 = 5;

    int s_a[n1+n2];

    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while(i<n1 && j<n2)
    {
        if(a1[i] <= a2[j])
        {
            s_a[k] = a1[i];
            k++;
            i++;
        }
        else
        {
            s_a[k] = a2[j];
            k++;
            j++;
        }
    }

    while(i < n1)
    {
        s_a[k] = a1[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        s_a[k] = a2[j];
        j++;
        k++;
    }

    for(int m=0; m<n1+n2; m++)
        cout << s_a[m] << " ";

    return 0;
}
