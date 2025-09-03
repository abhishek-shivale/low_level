//
// Created by Abhishek shivale on 03/09/25.
//

#include "data_structure.h"

using namespace std;

class MyCar {
    string car_name;

public:
    explicit MyCar(const string &my_car) {
        car_name = my_car;
    }

    void honk() {
        cout << "Honk car: " << car_name << endl;
    }
};

int main() {
    string my_car;
    cout << "Enter Car Name : " << my_car;
    cin >> my_car;
    MyCar car(my_car);

    car.honk();
}
