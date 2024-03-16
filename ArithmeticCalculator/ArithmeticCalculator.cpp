#include <iostream>
#include <cmath>
#include "Addition/AdditionFormula.cpp"
#include "Subtraction/SubtractionFormula.cpp"
#include "Multiplication/MultiplicationFormula.cpp"
#include "Division/DivisionFormula.cpp"
using namespace std;

void calculation () {
    double num1, num2;
    char oper;
    string pause;

    cout << "Enter The First Number : ";
    cin >> num1;

    cout << "Enter The Second Number : ";
    cin >> num2;

    cout << "Enter The Operator ( + | - | * | / ) : ";
    cin >> oper;

    switch (oper) {
        case '+': {
            addition(num1, num2);
            break;
        }
        case '-': {
            subtraction(num1, num2);
            break;
        } 
        case '*': {
            multiplication(num1, num2);
            break;
        }
        case '/': {
            division(num1, num2);
            break;
        }
        default: {
            cout << "Error : Invaild Operator" << endl;
            break;
        }
    }

    cin >> pause;
}

int main () {
    calculation ();
    return 0;
}