#include<iostream>
using namespace std;

int main(){
    double x,y;
    char z;
    double a;
    cout << "Enter two numbers along with the operator: " << endl;
    cin >> x >> z >> y ;

    if( z == '+'){
        a = x + y;
        cout << "\nSummation is: " << a << endl;
    }

     else if( z == '-'){
        a = x - y;
        cout << "\nSummation is: " << a << endl;
    }

     else if( z == '*'){
        a = x * y;
        cout << "\nSummation is: " << a << endl;
    }

     else if (z == '/'){
        a = x / y;
        cout << "\nSummation is: " << a << endl;
    }

return 0;
}
