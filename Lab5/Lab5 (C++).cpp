#include <iostream>
using namespace std;
long long n, i = 1, i1, lg, biss;

void func(long long l);

int main()
{
    int ost;
    cout << "Enter natural n: "; cin >> n;
    for (i; i < n; i += 1) {
        ost = i % 10;
        if (ost == 1 || ost == 5 || ost == 6) {
            func(i);
        }
    }
}

void func(long long l) 
{
    i1 = l * l;
    lg = 1 + log10(l);
    biss = pow(10, lg);
    if ((i1 - l) % biss == 0) {
        cout << l << " " << i1 << endl;
    }
}