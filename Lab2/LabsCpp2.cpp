#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x: "; cin >> x;
	if (x <= 0) {
		y = -x;
		cout << "Y = " << -x;
	}
	else {
		y = x * x;
		cout << "Y = " << y;
	}
}
