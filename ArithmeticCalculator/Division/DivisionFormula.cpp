#include <iostream>
#include <cmath>
using namespace std;

void division (double x, double y) {
    if (y != 0) {
        cout << x << " / " << y << " = " << (x / y) << endl;
    }
    else {
        cout << "Error : Division By Zero" << endl;
    }
}