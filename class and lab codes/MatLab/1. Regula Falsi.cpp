//regula falsi
#include<iostream>
#include<iomanip>
using namespace std;

float f(float x) {
	return cos(x) - x * exp(x);
}
void regula(float* x, float x0, float x1, float fx0, float fx1, int* itr)
{
	*x = x0 - ((x1 - x0) / (fx1 - fx0)) * fx0;
	(*itr)++;
	cout << " Iteration No." << setw(3) << *itr << "\t X= " << setw(7) << setprecision(5) << *x << endl;

}
int main(){
	int itr = 0, maxitr;
	float x0, x1, x2, x3, aerr; //1, 7, 0.0001, 1000
	cout << "Enter the value of x0: ";
	cin >> x0;
	cout << "Enter the value of x1: ";
	cin >> x1;
	cout << "Enter tolerable error: ";
	cin >> aerr;
	cout << "Maximum iterations: ";
	cin >> maxitr;
	cout << endl;

	regula(&x2, x0, x1, f(x0), f(x1), &itr);
	do {
		if (f(x0) * f(x2) < 0)
			x1 = x2;
		else
			x0 = x2;
		regula(&x3, x0, x1, f(x0), f(x1), &itr);
		if (fabs(x3 - x2) < aerr) {
			cout << "\nAfter " << itr << " iterations, root = " << x3 << endl;
			return 0;
		}
		x2 = x3;
	} while (itr < maxitr);

	cout << "Solution does not converge" << endl;
	cout << "Iterations are not sufficient" << endl;
	return 1;

}