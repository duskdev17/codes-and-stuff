#include <iostream>
using namespace std;

class WTF{
private:
    int x,y;
public:
    get_WTF(int a){
        x = a;
        y = a;
    }
    display_WTF(){
        cout << "Value of x is:" << x << endl;
        cout << "Value of y is:" << y << endl;
    }
};

int main(){
    WTF ob1;

    ob1.get_WTF(10);
    ob1.display_WTF();

    ob1 = 50;
    ob1.display_WTF();

    return 0;
}
