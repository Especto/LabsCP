#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    /* ������ ���� n-������ ����� ����. ������� �,
    �+d, a+(n-1)d �� �������� ���������� a, d, n. */
    double a, d;
    unsigned int n;
    cout << "Enter first term of a progression, number of term, and difference with a space: "; cin >> a >> n >> d;
    double sum = (2 * a + d * (n - 1)) / 2 * n;
    cout << "The soum of a progression: " << sum;

    return 0;
}