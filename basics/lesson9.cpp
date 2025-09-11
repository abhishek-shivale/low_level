//
// Created by Abhishek shivale on 11/09/25.
//


#include "data_structure.h"

using namespace std;

// reference - another name to variable

int main () {
    int a = 10;
    int &b = a;
    cout << a << endl;
    b++;
    cout << a << endl;
}