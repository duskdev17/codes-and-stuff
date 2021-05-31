#include<iostream>
#include<iomanip>
using namespace std;

class employee{
private:
    int a;
    float b, c;
public:
    void get_value(){
       cin >> a ;
       cin >> b ;
       cin >> setprecision(2) ;
       cin >> c >> setprecision(2);
    }
    float show_value(){
        cout << "NUMBER = " << a << endl;
        cout << fixed << setprecision(2) ;
        cout << "SALARY = U$ " << setprecision(2) << b * c << endl;
    }
};

int main(){
    employee ob;

    ob.get_value();

    ob.show_value();

    return 0;
}
