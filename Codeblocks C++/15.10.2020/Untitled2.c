#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string word1, word2, word3;

    cin >> word1 >> word2 >> word3;

    if(word1 == "vertebrado"){
        if(word2 == "ave"){
            if(word3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            else{
                cout << "pomba" << endl;
            }
        }
        else if(word2 == "mamifero"){
            if(word3 == "onivoro"){
                cout << "homem" << endl;
            }
            else{
                cout << "vaca" << endl;
            }
        }
    }

    else if(word1 == "invertebrado"){
        if(word2 == "inseto"){
            if(word3 == "hematofago"){
                cout << "pulga" << endl;
            }
            else{
                cout << "lagarta" << endl;
            }
        }
        else if(word2 == "anelideo"){
            if(word3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else{
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
