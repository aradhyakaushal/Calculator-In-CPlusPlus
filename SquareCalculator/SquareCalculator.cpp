#include <iostream>
#include <cmath>
#include "SquareFormula.cpp"
using namespace std;

void calculation () {
    double base;
    string pause;

    cout << "Enter The Base : ";
    cin >> base;

    square(base);
    cin >> pause;
}

int main () {
    calculation ();
    return 0;
}