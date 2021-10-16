#include <iostream>
using namespace std;

int main()
{
    double s, x, e, demtor, numtor, deltS;
    int n, sign;
    n = 0;
    s = 0;
    e = 0.00001;
    deltS = 1;
    cout << "Enter x: "; cin >> x;
    cout.setf(ios_base::fixed);
    while (abs(deltS)  > e) {
        sign = pow((-1), n);
        numtor = pow(x, 2 * n) + 1;
        demtor = pow(2, n) + 1;
        deltS = sign * numtor / demtor;
        s = s + deltS;
        n++;
        cout << n << " element: " << deltS << "  The sum: " << s << endl;
    }

    cout << "Result: " << s;
}