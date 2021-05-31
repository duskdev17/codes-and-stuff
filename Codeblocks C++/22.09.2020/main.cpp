#include <iostream>
using namespace std;

class BangladeshArmy{
public:
    virtual attack(){
        cout << "Bangladesh Army Attack" << endl;
    };
};

class TurkishArmy:public BangladeshArmy{
public:
    int attack(){
        cout << "Turkish Army Attack" << endl;
    };
};

class MayanArmy:public BangladeshArmy{
public:
    int attack();
};

int main(){
    BangladeshArmy obb;
    TurkishArmy obt;

    MayanArmy *obm1 = &obb;
    MayanArmy *obm2 = &obt;

    return 0;
}
