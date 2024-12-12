//Develop a C++ program to accept the age of the user.
// Using try catch statement, if the age entered by the user is 18 or less it will throw an exception.
// "Access denied you must be at least 18 years old "

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter age: ";
    cin>>age;

    try {
        if(age>= 18) {
            cout<<"Acess granted";

        } else {
            throw (age);
        }
    }
    catch (int num) {
        cout<<"Access denied- You must be at least 18 years old.\n";
        cout<<"Age is: "<<num;
    }
    return 0;
}