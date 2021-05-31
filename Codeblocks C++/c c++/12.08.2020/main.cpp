#include<iostream>
using namespace std;

class games
{
    private:
        int x;
        int y;
    public:
        games(); //constructor
        ~games();//destructor
        show();
};
games :: games()
{
    cout << "this is a constructor" << endl;
    x=10;
}

games :: ~games(){
    cout << "This is a destructor" << endl;
}

void games :: show(){
    cout << "The value of x is:" << x << endl;
}

int main(){
    games game1,game2;

    game1.games();
    game1.~games();

    game1.show();

    return 0;
}
