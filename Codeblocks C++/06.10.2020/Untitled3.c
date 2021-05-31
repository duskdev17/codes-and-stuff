#include <iostream>
using namespace std;

class showvalue
{
private:
    int a;
public:
    show(int value[], int size)
    {
        for( a=0; a<=2; a++ )
        {
            cout << value[a] << endl;
        }
    }
};

class order
{
private:
    int temp, i, j, c;
public:
    void ordervalues(int val[], int sizeval)
    {
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                if(val[i]<val[j])
                {
                    temp  =val[i];
                    val[i]=val[j];
                    val[j]=temp;
                }
            }
        }
            for( i=0; i<=2; i++ )
            {
                cout << val[i] << endl;
            }
            cout << endl;
    }
};

int main()
{
    int arr[10], b, grr[10];
    for( b=0; b<=2; b++ )
    {
        cin >> arr[b];
    }
    showvalue bal;
    bal.show(arr, 10);
    order ob1;
    ob1.ordervalues(arr, 10);

    return 0;
}
