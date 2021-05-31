#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define PI 3.14159

using namespace std;

main(){
    d R,A;

    cin >> R;

    A = PI * R*R;

    printf("A=");
    printf("%.4f", A);
    return 0;
}

