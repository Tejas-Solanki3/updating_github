//Write a program to demonstrate function overloading by creating three functions named max:
// int main(int a,int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.

#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    double p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "The larger integer is: " << max(x, y) << endl;

    cout << "Enter two double values: ";
    cin >> p >> q;
    cout << "The larger double value is: " << max(p, q) << endl;

    return 0;
}