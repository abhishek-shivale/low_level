//
// Created by Abhishek shivale on 03/09/25.
//
/*
 * Oops, in c++
 *  1. Encapsulation - In easy Word Hide Data
 *  2. Abstraction - Show only necessary Data
 *  3. Inheritance - One class child can inherit feature from another class
 *  4. PolyMorphism - means same function behaves differently
 */

#include "data_structure.h"

using namespace std;

/* 1. Encapsulation */
class User {
private:
    string Paasword;

public:
    string Name;

    explicit User(const string &password) {
        Paasword = password;
        cout << "Enter name: ";
    }
};

/* 2. Abstraction */
class Car {
public:
    void start() {
        cout << "car started!" << endl;
    }
};

/* 3. inheritance */
class Animal {
protected:
    string animal_name;

public:
    explicit Animal(const string &animal) {
        animal_name = animal;
        cout << "Animal created: " << animal_name << endl;
    }

    void showName() {
        cout << "This is an animal named: " << animal_name << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string &animal) : Animal(animal) {
        cout << "Dog started!" << endl;
    }

    void bark() {
        cout << animal_name << " says: Woof Woof!" << endl;
    }
};

/* 4. PolyMorphism */

class Math {
    public:
        int add(const int a, const int b) {
            return a + b;
        }
        double add(const double a, const double b) {
            return a + b;
        }
};

/* Specifier
 * virtual - Enables runtime polymorphism
 * explicit - Prevents Implicit Conversion
 * inline - It’s a request to the compiler to replace a function call with the actual function code
 */



int main() {

}
