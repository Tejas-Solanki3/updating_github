// Write a program that prompts the user to enter a number.
// If the number is negative, throw an exception.
// Catch and handle the exception to display an appropriate message.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    try {
        if(num>= 0) {
            cout<<"Number is positive";

        } else {
            throw (num);
        }
    }
    catch (int myNum) {
        cout<<"Number is negative .\n";
        cout<<"Number is: "<<myNum;
    }
    return 0;
}