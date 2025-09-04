//
// Created by Abhishek shivale on 04/09/25.
//
/*
 * Number guessing Game
 * 1. define range
 * 2. pick any number
 * 3. ask user to guess based on that log too low, too high, you guess is correct
 *
 */

#include <iostream>

using namespace std;

int getRandomNumber(int range) {
    srand(time(NULL));
    return (rand() % range) + 1;
}

int main() {
    int range;
    cout  << "Number Guessing Game Started" << endl;
    cout << "Please enter a number as range : ";
    cin >> range;
    srand(time(NULL));
    cout << "guess number from " << "( 1 - " << range << " )" << endl;
    int random = getRandomNumber(range);
    int guess = 0;

    while (guess != random) {
        cin >> guess;
        if (guess == random) {
            cout << "Your guess is correct " << endl;
        } else if (guess > random) {
            cout << "Your guess is too high" << endl;
        } else if (guess < random) {
            cout << "Your guess is too low" << endl;
        }
    }
}
