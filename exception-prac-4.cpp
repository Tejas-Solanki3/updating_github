//Create a class called Factorial having member function fact() to calculate the factorial of a given number.
// Throw an exception if number entered by the user is negative or zero.

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    } else if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    try {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: Invalid input. Please enter a non-negative integer." << endl;
    }
    return 0;
}