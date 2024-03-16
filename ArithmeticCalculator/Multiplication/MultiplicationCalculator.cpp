#include <iostream>
#include <cmath>
#include "MultiplicationFormula.cpp"
using namespace std;

void calculation () {
    double num1, num2;
    string pause;

    cout << "Enter The First Number : ";
    cin >> num1;

    cout << "Enter The Second Number : ";
    cin >> num2;

    multiplication(num1, num2);
    cin >> pause;
}

int main () {
    calculation ();
    return 0;
}