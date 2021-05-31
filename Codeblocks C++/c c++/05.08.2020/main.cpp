#include <iostream>
using namespace std;

int max(int num1,int num2){
     int result;
     if (num1 > num2){
        result = num1;
     }
     else{
        result = num2;
     }
     return result;
}


int main()
{
    int a,b;
    int ret;

    cout << "Enter two numbers to compare:" << endl;
    cin >> a >> b ;

    ret = max(a,b);

    cout << "Max value is " << ret << endl;

    return 0;
}
