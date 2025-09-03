#include <iostream>

using namespace std;

double square(double x) {
    return x * x;
}

void print_square(double x) {
    cout << "the square of x is :- " << square(x) << endl;
}

int main() {
    double x;

    cout << "Enter a number : ";
    cin >> x; // taking input as number

    print_square(x); // function calling
}
