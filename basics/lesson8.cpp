//
// Created by Abhishek shivale on 10/09/25.
//


#include "data_structure.h"

using namespace std;

// pointer - address variable built for storing address
// main memory - code, stack, heap
// pointer is need to access the memory that is outside the program (heap memory/resource/ parameter passing)
// size of pointer is 8 bytes

int main () {
    // in stack memory
    int a = 10; // data variable
    int *p;  // address variable
    p = &a;

    int arr[3] = {1, 2, 3};
    p = arr;

    // create array in heap

    p = new int[3] {
        1, 2, 3
    };

    // cout << p << &a << endl;

    //p = new int(1);

    cout << p[0] << endl;

    delete[] p;
}