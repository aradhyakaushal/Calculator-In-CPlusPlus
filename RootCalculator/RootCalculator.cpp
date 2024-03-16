#include <iostream>
#include <cmath>
#include "RootFormula.cpp"
using namespace std;

void calculation () {
    double base, root;
    string pause;

    cout << "Enter The Base : ";
    cin >> base;

    cout << "Enter The Root : ";
    cin >> root;

    nth_root(base, root);
    cin >> pause;
}

int main () {
    calculation ();
    return 0;
}