//
// Created by Abhishek shivale on 9/09/25.
//

#include "data_structure.h"

using namespace std;
// Struct - it is defined as collection of the similar data items under one name that is grouping the data
// char having padding for efficiency
struct Rectangle {
    int width;
    int height;
    char color; // padding 9 -> 12 byte
};
int main () {
    struct Rectangle rect{};
    rect.width = 10;
    rect.height = 20;
    cout << sizeof(rect) << endl;
}