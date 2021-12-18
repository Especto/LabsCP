#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

void filling(int**, int n);
void vector(int** A, int* X, int n);
int multiply(int** A, int n, int i, int j);

int main() {
    int n;
    printf("Enter n: ");
    cin >> n;
    int** A = new int* [n];
    int* X = new int[n];
    filling(A, n);
    vector(A, X, n);
    cout << "\nX:\n";
    for (int i = 0; i < n; i++) {
        cout << X[i] << "\t";
    }
}

void filling(int** A, int n) {
    srand(time(0));
    for(int i = 0; i < n; i++) {
        A[i] = new int[n];
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

void vector(int** A, int* X, int n) {
    int i2, j2;
    for(int i = 0; i < n; i++) {
        int max = 0;
        for (int j = 0; j < n; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                i2 = i, j2 = j;
            }
        }
        X[i] = multiply(A, n, i2, j2);
    }
}

int multiply(int** A, int n, int i, int j) {
    int Mmult = 0, mult = 0;
    for (int k = 0; k < n; k++) {
        mult = A[i][k] * A[k][j];
        Mmult = Mmult + mult;
    }
    return(Mmult);
}