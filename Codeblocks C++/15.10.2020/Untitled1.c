#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double salary;

    cin >> setprecision(2);
    cin >> salary;

    double rate, new_salary, earn;

    if ( salary>=0 && salary<=400.00 ){
        rate = .15;
        new_salary = salary + salary*rate;
        earn = new_salary - salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << earn << endl;
        cout << "Em percentual: " << fixed << setprecision(0) << rate*100 << " %" << endl;
    }

    else if ( salary>=400.01 && salary<=800.00 ){
        rate = .12;
        new_salary = salary + salary*rate;
        earn = new_salary - salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << earn << endl;
        cout << "Em percentual: " << fixed << setprecision(0) << rate*100 << " %" << endl;
    }

    else if ( salary>=800.01 && salary<=1200.00 ){
        rate = .10;
        new_salary = salary + salary*rate;
        earn = new_salary - salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << earn << endl;
        cout << "Em percentual: " << fixed << setprecision(0) << rate*100 << " %" << endl;
    }

    else if ( salary>=1200.01 && salary<=2000.00 ){
        rate = .07;
        new_salary = salary + salary*rate;
        earn = new_salary - salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << earn << endl;
        cout << "Em percentual: " << fixed << setprecision(0) << rate*100 << " %" << endl;
    }

    else if ( salary>2000.00){
        rate = .04;
        new_salary = salary + salary*rate;
        earn = new_salary - salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << earn << endl;
        cout << "Em percentual: " << fixed << setprecision(0) << rate*100 << " %" << endl;
    }

    return 0;
}
