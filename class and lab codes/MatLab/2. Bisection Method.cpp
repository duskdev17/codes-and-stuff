#include <iostream>
using namespace std;
#define EP 0.01

double solution(double x) {
    return x * x * x - x * x + 2;
}


void bisection(double a, double b) {
    if (solution(a) * solution(b) >= 0) {
        cout << "You have not assumed right a and b\n";
        return;
    }
    double c = a;
    while ((b - a) >= EP) {

        c = (a + b) / 2;

        if (solution(c) == 0.0)
            break;

        else if (solution(c) * solution(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

int main() {
    double a = -500, b = 100;
    bisection(a, b);
    return 0;
}