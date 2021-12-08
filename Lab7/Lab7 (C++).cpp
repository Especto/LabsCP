#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

void filling(int[], int t);
void checker(int[], int t);
void change(int[], int t);

int main() {
    int t;
    printf("Enter t: ");
    cin >> t;
    int* arr = new int[t];
    filling(arr, t);
    checker(arr, t);
    for (int i = 0; i < t; i++) {
        cout << arr[i] << "\n";
    }
}

void filling(int arr[], int t) {
    srand(time(0));
    for (int i = 0; i < t; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < t; i++) {
        cout << arr[i] << "\n";
    }
}

void checker(int arr[], int t) {
    int d = arr[1] - arr[0];
    bool check = 1;
    for (int i = 1; i < t; i++) {
        if (arr[i] - arr[i - 1] != d) {
            check = 0;
        }
    }
    if (check == 0) {
        change(arr, t);
    }
    else {
        printf("\nDifference: %d\n\n", d);
    }
}

void change(int arr[], int t) {
    int min = arr[0];
    for (int i = 0; i < t; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i = 0; i < t; i++) {
        for (int j = i + 1; j < t; j++) {
            if (arr[i] == arr[j]) {
                arr[i] = arr[j] = min;
            }
        }
    }
    printf("\nMin: %d\n\n", min);
}