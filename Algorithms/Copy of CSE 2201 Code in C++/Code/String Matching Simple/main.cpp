#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[100], ptr[10];
    int is_p = 0;
    cout << "Enter your text: ";
    gets(str);
    cout << "Enter ur pattern: ";
    gets(ptr);
    int i, j, k, m, n;

    i = 0;
    m = strlen(str);
    n = strlen(ptr);
    while(i < m)
    {
        k = i;
        j = 0;
        while(str[k] == ptr[j])
        {
            k++, j++;
            if(j == n)
            {
                is_p = 1;
                 break;
            }
        }
        i++;
    }

    if(is_p == 1)
        cout << "Found at " << i;
    else
        cout << "Not Found!";

    return 0;
}
