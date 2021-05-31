#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char text[1000];

    fstream file;
    file.open("text.txt",ios::out | ios::in | ios::app);

    cout << "Enter the text you want to write:" << endl;
    cin.getline(text, sizeof(text));

    //writing on file
    file << text << endl;

    //reading from file
    file >> text;
    cout << text << endl;

    return 0;
}
