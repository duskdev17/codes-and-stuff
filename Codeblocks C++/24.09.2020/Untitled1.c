
#include <iostream>
using namespace std;

class area
{
private:
    int x,y;
public:
    int getdata(int a,int b){
        x = a;
        y = b;
    }
    double arearesult(){
        return x * y;
    }
};

int main()
{
    int length, width;

    cout << "Enter length:" << endl;
    cin >> length;

    cout << "Enter width:" << endl;
    cin >> width;

    area ob1;

    ob1.getdata(length, width);

    cout << "Area:" << ob1.arearesult() << endl;

    return 0;
}
