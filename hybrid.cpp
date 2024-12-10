#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is Vehicle" << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    FourWheeler() {
        cout << "This is FourWheeler class" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This is Car class" << endl;
    }
};

class SportsCar : public Car, public FourWheeler {
public:
    SportsCar() {
        cout << "This is SportsCar class" << endl;
    }
};

int main() {
    SportsCar obj1;
    return 0;
}
