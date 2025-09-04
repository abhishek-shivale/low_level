//
// Created by Abhishek shivale on 04/09/25.
//



#include "data_structure.h"

using namespace std;

/*
 * Memory Layout -
 * 1. Code/Text segment - where your compiled machine instruction live.
 * 2. Global/Static segment - for global & static variable (lifetime = whole program)
 * 3. Stack - automatic memory (function call, local variables).
 * 4. Heap - dynamically allocated memory  new/delete or malloc/delete
 *
 * stack memory -
 * allocated automatically when a function is called.
 * freed automatically when function ends.
 * fast but limited in size
 *
 * heap memory -
 * Allocated manually by programmer
 * lifeTime untile ou free it
 * slower than stack but flexible.
 *
 */

void stack_memory () {
    int x = 10;
}

void heap_memory_new () {
    const int* p = new int(10);
    delete p;
}

void heap_memory_malloc () {
    void *p = (int*)(malloc(10));
    free(p);
}


int main() {



}
