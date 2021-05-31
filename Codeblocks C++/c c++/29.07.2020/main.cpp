#include <iostream>

using namespace std;

class chef(){
public:
    void makeChicken(){
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialdish(){
        cout << "The chef makes Brbq Ribs" << endl;
    }
};
int main(){
        Chef chef1;
        chef1.makeChicken();
    return 0;
}
