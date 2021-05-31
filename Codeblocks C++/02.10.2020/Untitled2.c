#include<iostream>
#include<iomanip>
#define pi 3.14159
using namespace std;

class area{
private:
    double A, B, C;
public:
    void getdata(){
        cin >> setprecision(1) ;
        cin >> A >> B >> C ;
    }
    void triangle(){
        double areaoftriangle = 0.5 * A * C ;
        cout << fixed << setprecision(3) ;
        cout << "TRIANGULO: " << setprecision(3) << areaoftriangle << endl;
    }
    void circle(){
        double areaofcircle = pi * C * C ;
        cout << fixed << setprecision(3) ;
        cout << "CIRCULO: " << setprecision(3) << areaofcircle << endl;
    }
    void trapezium(){
        double areaoftrapezium = (( A + B )/2 ) * C;
        cout << fixed << setprecision(3) ;
        cout << "TRAPEZIO: " << setprecision(3) << areaoftrapezium << endl;
    }
    void square(){
        double areaofsquare = B * B ;
        cout << fixed << setprecision(3) ;
        cout << "QUADRADO: " << setprecision(3) << areaofsquare << endl;
    }
    void rectangle(){
        double areaofrectangle = A * B ;
        cout << fixed << setprecision(3) ;
        cout << "RETANGULO: " << setprecision(3) << areaofrectangle << endl;
    }
};

int main(){
    area ob;

    ob.getdata();
    ob.triangle();
    ob.circle();
    ob.trapezium();
    ob.square();
    ob.rectangle();

    return 0;
}
