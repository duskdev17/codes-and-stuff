#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int start_hour, start_min, finish_hour, finish_min, duration, duration_min;

    cin >> start_hour >> start_min >> finish_hour >> finish_min;

    if(start_hour < finish_hour)
    {
        duration = finish_hour - start_hour;
        if (finish_min > start_min)
        {
            duration_min = finish_min - start_min;
        }
        else if( start_min > finish_min )
        {
            duration--;
            duration_min = 60 - (start_min - finish_min);
        }
        cout << "O JOGO DUROU "<< duration << " HORA(S) E " << duration_min << " MINUTO(S)" << endl;
    }

    else if(start_hour > finish_hour)
    {
        duration = (24 - start_hour) + finish_hour;
        if (finish_min > start_min)
        {
            duration_min = finish_min - start_min;
        }
        else if( start_min > finish_min )
        {
            duration_min = 60 - (start_min - finish_min);
        }
        cout << "O JOGO DUROU "<< duration << " HORA(S) E " << duration_min << " MINUTO(S)" << endl;
    }

    else if( start_hour == finish_hour && start_min > finish_min ){
        duration_min = 60 - ( start_min - finish_min );
        duration = 24;
        duration--;
        cout << "O JOGO DUROU " << duration << " HORA(S) E " << duration_min << " MINUTO(S)" << endl;
    }

    else if( start_hour == finish_hour && start_min < finish_min ){
        duration_min = ( finish_min - start_min );
        duration = 24;
        cout << "O JOGO DUROU " << duration << " HORA(S) E "<< duration_min << " MINUTO(S)" << endl;
    }


    else if(start_hour == finish_hour && start_min == finish_min)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

    return 0;
}
