#include <iostream>

using namespace std;

class Calculator {
public:
    double add(const double a, const double b) {
        return a + b;
    }

    double subtract(const double a, const double b) {
        return a - b;
    }

    double multiply(const double a, const double b) {
        return a * b;
    }

    double divide(const double a, const double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    char cal_sign;
    double number_1;
    double number_2;
    cout << "Enter Number 1: ";
    cin >> number_1;
    cout << "Enter Number 2: ";
    cin >> number_2;
    cout << "Enter sign (+, -, *, /) : ";
    cin >> cal_sign;
    Calculator cal;
    switch (cal_sign) {
        case '+':
            cout << "Answer " << cal.add(number_1, number_2);
            break;
        case '-':
            cout << "Answer " << cal.subtract(number_1, number_2);
            break;
        case '*':
            cout << "Answer " << cal.multiply(number_1, number_2);
            break;
        case '/':
            cout << "Answer " << cal.divide(number_1, number_2);
            break;
        default:
            cout << "Invalid Input!" << endl;
    }
}
