#include <iostream>
using namespace std;

double a1, a2, b1, b2, c1, c2;
double S = 0, discr, x1, x2, a, b, h, N = 10000, f_a, f_b;
int n = 1;

int main()
{
	cout << "Enter coefficients of functions: ";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	a1 = a1 - a2;
	b1 = b1 - b2;
	c1 = c1 - c2;
	discr = b1 * b1 - 4 * a1 * c1;
	x1 = (-b1 - sqrt(discr)) * 0.5 / a1;
	x2 = (-b1 + sqrt(discr)) * 0.5 / a1;
	b = max(x1, x2);
	a = min(x1, x2);
	cout.setf(ios_base::showpos);
	cout << "Find the integral of funcion y = " << a1 << "(x^2)" << b1 << "x" << c1;
	cout << " between this points: " << a << " " << b << endl;
    h = (b - a) / N;
	double f_b = a1 * b * b + b1 * b + c1;
	while (n < N) {
		a = a + h;
		double f_a = a1 * a * a + b1 * a + c1;
		if (n % 2 == 0) {
			S = S + 2 * f_a;
		}
		else {
			S = S + 4 * f_a;
		}
		n++;
	}
	S = h / 3 * (f_a + f_b + S);
	cout.unsetf(ios_base::showpos);
	cout.precision(10);
	cout << "Result: "<< abs(S);

}
