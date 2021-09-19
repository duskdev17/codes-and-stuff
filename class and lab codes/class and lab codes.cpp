
#include<iostream>
#include<string.h>
using namespace std;
void showmenu()
{
    cout << "********MENU********" << endl;
    cout << "1.Check balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4.Send money on BKASH/NAGAD" << endl;
    cout << "5.Exit" << endl;
    cout << "********END********" << endl;
}

int main()
{
    int option;
    int password;
    double balance = 5000;
    cout << "Please input your pin: ";
    cin >> password;
    do
    {
        if (password == 1234)
        {
            showmenu();
        }
        else
        {
            cout << "Enter the correct pin: ";
            system("PAUSE");
            system("CLS");

        }

        cout << "Please Choose An Option: ";

        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
        {
            cout << "Balance is: " << balance << "TK" << endl;
            break;
        }
        case 2:
        {
            cout << "Deposit Amount: ";
            double depositamount;
            cin >> depositamount;
            balance += depositamount;
            break;
        }
        case 3:
        {
            cout << "Withdraw Amount: ";
            double withdrawamount;
            cin >> withdrawamount;
            if (withdrawamount <= balance)
            {
                balance -= withdrawamount;
            }
            else
                cout << "Not enough money" << endl;
            break;
        }
        case 4:
        {
            cout << "Give The BKASH/NAGAD NUMBER: ";
            double pnum;
            cin >> pnum;
            cout << "Send money amount :";
            double sndmny;
            cin >> sndmny;
            if (sndmny <= balance)
            {
                balance -= sndmny;
                cout << "SUCCESSFULLY SENT" << endl;

            }
            else
                cout << "Not enough money" << endl;
            break;
        }

        }

    } while (option != 5);

    system("pause>0");

}
