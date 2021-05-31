
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int start, finish, duration;

    cin >> start >> finish;

    if(start < finish){
        duration = finish - start;
        cout << "O JOGO DUROU "<< duration << " HORA(S)" << endl;
    }
    else if(start > finish){
        duration = (24 - start) + finish;
        cout << "O JOGO DUROU "<< duration << " HORA(S)" << endl;
    }
    else if(start == finish){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
}
