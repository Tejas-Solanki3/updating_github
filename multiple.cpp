#include <iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout<<" This is Vehicle " <<endl;
    }
};

class Driver {
    public:
    Driver() {
        cout<<"This is heavy driver" <<endl;
    }
};

class Car : public Vehicle, public Driver{
    //Car class inhertis the constructor of Vehicle and Driver
};

int main(){
    Car obj;
     //This will call the Vehicle constructor
    return 0;
}
