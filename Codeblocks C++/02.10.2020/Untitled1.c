#include <iostream>
#include<iomanip>
using namespace std;

class salary_with_bonus{
private:

    char name[100] = {};
    double fixed_salary;
    double sold_products;
    double final_salary;
public:
    void get_data(){
        cin.getline(name, 100) ;
        cin >> setprecision(2) ;
        cin >> fixed_salary ;
        cin >> sold_products;
    }

    void show_result(){
        final_salary = fixed_salary + (sold_products * 0.15);
        cout << fixed << setprecision(2);
        cout << "TOTAL = R$ " << setprecision(2) << final_salary << endl;
    }
};

int main(){
    salary_with_bonus ob;

    ob.get_data();

    ob.show_result();

    return 0;
}
