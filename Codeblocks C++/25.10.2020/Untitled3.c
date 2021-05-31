#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,n, values[100];

    for(i=0; i<100; i++){
        if(values[i] > values[i+1]){
            temp = values[i];
            values[i] = values[i+1];
            values[i+1] = temp;
        }
    }
