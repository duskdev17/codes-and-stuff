#include<iostream>
using namespace std;
class AB
{
    int n1, n2;
public:
    AB(int a, int b=0)
    {
        n1=a;
        n2=b;
        cout<<n1<<" "<<n2<<endl;
    } ~AB()
    {
        cout<< "destructing AB"<<endl;
    }
};
class CD: public AB
{
    int n1, n2;
public:
    CD(int a, int b): AB(b)
    {
        n1=a;
        n2=b;
        cout<<n1<<" "<<n2<<endl;
    } ~CD()
    {
        cout<< "destructing CD"<<endl;
    }
};
int main()
{
    CD d(10,20);
}
