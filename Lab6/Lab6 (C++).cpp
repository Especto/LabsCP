#include <iostream>
using namespace std;
float root(float x);

int main() {
	float a, b, Y, x1, x2, x3;
	cout << "Enter a and b: "; cin >> a >> b;
	x1 = root(root(a));
	x2 = sqrt(root(b));
	x3 = root(a + b);
	Y = x1 + x2 + x3;
	cout << Y;
}

float root(float x) {
	float Z0 = x, z = Z0, eps = 0.00001, l1, l2 ;
	do{
		Z0 = z;
		l1 = x / (Z0 * Z0);
		l2 = 2 * Z0;
		z = 1.0 / 3.0 * (l1 + l2);

	} while (abs(Z0 - z) > eps);
	return z;
}

