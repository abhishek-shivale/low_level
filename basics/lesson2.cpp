//
// Created by Abhishek shivale on 03/09/25.
// Topic - Data Type In C++
//

#include <iostream>

using namespace std;

int main() {
    int car_no = 9; // Declare car_no but not initialized

    // Signed integer can be positive and negative
    // memory for 1 byte range is -128 to 127

    // unsinged integer can be positive only
    // memory for 1 byte range 0 to 255

    int square = 2; // Declare and initialized
    // PRIMARY DATA-TYPE
    // char hold 1 bytes
    // bool hold 1 bytes
    // int hold 4 bytes
    // double holds 8 bytes

     // x+y // plus
     // +x // unar y plus
     // x−y // minus
     // −x // unar y minus
     // x∗y // multiply
     // x/y // divide
     // x%y // remainder (modulus) for integers

    // x==y // equal
    // x!=y // not equal
    // x<y // less than
    // x>y // greater than
    // x<=y // less than or equal
    // x>=y // greater than or equal


    // cout << "Size of int: " << sizeof(int) << " bytes" << endl; // size of for sizing data type size


    /* constant -
     *  **1** : const - not to change this value
     *  **2** : constexpr - evaluated at compile time
     */

    // Switch
    switch (car_no) {
        case 9:
            cout << "Car number: " << car_no << endl;
            break;
        default:
            cout << "Car number: " << car_no << endl;
    }

    // Condition statement

    if (car_no == 9) {
        cout << "Car number: " << car_no << endl;
    } else if (car_no > 9) {
        cout << "Car number: " << car_no << endl;
    } else {
        cout << "Car number: " << car_no << endl;
    }

    // Loop

    for (int i = 0; i < square; i++) {

    }

    while (car_no != 9) {
        cout << "Car number: " << car_no << endl;
    }
}
