#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char name[200];
    int age;

    fstream file;
    file.open("text.txt",ios::out | ios::in | ios::app);

    cout << "Enter a name to store:" << endl;
    cin.getline(name,sizeof(name));

    cout << "Enter a age to store: " << endl;
    cin >> age;

    //writing on a file
    file << name << endl;
    file << age << endl;

    //reading from a file
    file >> name;
    file >> age;

    cout << "Stored name was: " << name << endl;
    cout << "Stored age was: " << age << endl;

    return 0;
}
