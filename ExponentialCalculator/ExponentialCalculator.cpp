#include <iostream>
#include <cmath>
#include "ExponentialFormula.cpp"
using namespace std;

void calculation () {
    double base, power;
    string pause;

    cout << "Enter The Base : ";
    cin >> base;

    cout << "Enter The Power : ";
    cin >> power;

    exponent(base, power);
    cin >> pause;
}

int main () {
    calculation ();
    return 0;
}