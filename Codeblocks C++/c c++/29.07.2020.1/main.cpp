#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialdish()
    {
        cout << "The chef makes Brbq Ribs" << endl;
    }
};
class ItalianChef : public Chef{
    public:
     void makePasta(){
        cout << "The chef makes Pasta" << endl;
     }
     void makeSpecialdish(){
        cout << "This chef makes Biriani" << endl;
     }
};
int main()
{
    Chef chef1;
    chef1.makeChicken();
    chef1.makeSalad();
    chef1.makeSpecialdish();

    cout << "\nThe Italian Chef\n" << endl;

    ItalianChef italianchef1;
    italianchef1.makeChicken();
    italianchef1.makePasta();
    italianchef1.makeSpecialdish();

    return 0;
}
