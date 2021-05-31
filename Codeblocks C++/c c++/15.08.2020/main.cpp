#include<iostream>
using namespace std;

int factFinder(int x){
    if(x == 1){
        return 1;
    }
    else{
        return x*factFinder(x-1);
    }
}

int main()
{
    int a;
    cout << "Enter a number:" << endl;
    cin >> a;
    factFinder(a);

    cout << factFinder(a);

    return 0;
}
