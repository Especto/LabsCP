#include <iostream>
using namespace std;
double a1, b1, c1;


double f(double x)
{
	double fin;
	fin = a1 * x * x + b1 * x + c1;
	return fin;
}


int main() {
	double a, b, eps = 0.01, I = eps + 1, I1 = 0, a2, b2, c2, discr, x1, x2;
	cout << "Enter coefficients of functions: ";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	a1 = a1 - a2;
	b1 = b1 - b2;
	c1 = c1 - c2;
	if (a1 == 0) {
		cout << "Function is not quadratic.";
		return 0;
	}
	discr = b1 * b1 - 4 * a1 * c1;
	x1 = (-b1 - sqrt(discr)) * 0.5 / a1;
	x2 = (-b1 + sqrt(discr)) * 0.5 / a1;
	b = max(x1, x2);
	a = min(x1, x2);
	for (double N = 2; (fabs(I1 - I) > eps); N *= 2)
	{
		double h, sum = 0;
		h = (b - a) / (2 * N);
		for (double n = 1; n <= 2 * N; n += 2)
		{
			sum += 4 * f(a + h * n);
			sum += 2 * f(a + h * (n + 1));
		}
		sum = f(a) + sum - f(b);
		I = I1;
		I1 = (h / 3) * sum;
		}
	cout << fabs(I1) << endl;
	return 0;
}

