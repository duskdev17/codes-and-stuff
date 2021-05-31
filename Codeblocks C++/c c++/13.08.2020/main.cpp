#include<iostream>
#include<ctime>
using namespace std;

class timer{
private:
    clock_t start;
public:
    timer();
    ~timer();
};

timer :: timer(){
    start = clock();
}

timer :: ~timer(){
    clock_t end;

    end = clock();

    cout << "Elapsed time:" << (end - start) / CLOCKS_PER_SEC << endl;
}

int main()
{
    timer ob1;
    char c;

    cout << "Enter a key followed by the Enter:" << endl;
    cin >> c ;

    return 0;
}
