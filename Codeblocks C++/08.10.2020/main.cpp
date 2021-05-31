#include <iostream>
using namespace std;

class multiply{
private:
    int first, second;
public:
    void get_data(int a,int b){
        first = a;
        second = b;
    }
    void show_data(){
        cout << "First: " << first << "\nSecond: " << second << endl;
    }
    multiply operator * ( multiply c );
};

multiply multiply :: operator * (multiply c){
    multiply temp;
    temp.first = first*c.first;
    temp.second = second*c.second;
    return temp;
}

int main(){
    multiply ob1, ob2, ob3;
    ob1.get_data(10, 2);
    ob2.get_data(20, 3);
    ob3 = ob1 * ob2;
    ob3.show_data();
    return 0;
}
