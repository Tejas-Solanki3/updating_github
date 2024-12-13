#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter percentage: ";
    cin >> x;
    if (x <= 100 and x > 90) {
        cout << "A" << endl;
    } else if ( x >= 75) {
        cout << "B" << endl;
    } else if ( x >= 50) {
        cout << "C" << endl;
    } else if (x <= 50 and x >= 0) {
        cout << "F" << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }
    return 0;
}