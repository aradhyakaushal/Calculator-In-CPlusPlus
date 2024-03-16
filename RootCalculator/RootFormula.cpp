#include <iostream>
#include <cmath>
using namespace std;

void nth_root (double x, double y) {
    cout << y << " / "<< endl << " √ " << x << " = " << pow(x, 1/y) << endl;
}