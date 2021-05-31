#include <iostream>

using namespace std;

int main()
{
    int sday, shour, smin, ssec, eday, ehour, emin, esec, dayduration, minduration, hourduration, secduration;

    cout << "Dia " ;
    cin >> sday;
    cin >> shour >> smin >> ssec;

    cout << "Dia " ;
    cin >> eday;
    cin >> ehour >> emin >> esec;

    /* dayduration = eday - sday;
    cout << dayduration << "dia(s)" << endl; */


    if(shour > ehour)
    {
        dayduration = eday - sday;
        dayduration--;
        cout << dayduration << " dia(s)" << endl;
        hourduration = (24+ehour) - shour;
        cout << hourduration <<  " hora(s)" << endl;
    }
    else if(shour == ehour)
    {
        dayduration = eday - sday;
        cout << dayduration << "dia(s)" << endl;
        cout << "0 hora(s)" << endl;
    }
    else
    {
        dayduration = eday - sday;
        cout << dayduration << " dia(s)" << endl;
        hourduration = ehour - shour;
        cout << hourduration <<  " hora(s)" << endl;
    }


    if(smin < emin)
    {
        minduration = emin - smin;
        cout << minduration << " minuto(s)" << endl;
    }
    else if(smin == emin)
    {
        cout << "0 minuto(s)" << endl;
    }
    else
    {
        minduration = (60+emin) - smin;
        cout << minduration << " minuto(s)" << endl;
    }


    if(ssec < esec)
    {
        secduration = esec - ssec;
        cout << secduration << " segundo(s)" << endl;
    }
    else if(ssec == esec)
    {
        cout << "0 segundo(s)" << endl;
    }
    else
    {
        secduration = (60+esec) - ssec;
        cout << secduration << " segundo(s)" << endl;
    }

}
