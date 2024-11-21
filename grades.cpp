#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter percentage: ";
    cin >> x;
    if (x <= 100 and x > 90) {
        cout << "A+" << endl;
    } else if (x <= 90 and x > 80) {
        cout << "A" << endl;
    } else if (x <= 80 and x > 70) {
        cout << "B+" << endl;
    } else if (x <= 70 and x > 60) {
        cout << "B" << endl;
    } else if (x <= 60 and x > 50) {
        cout << "C" << endl;
    } else if (x <= 50 and x > 40) {
        cout << "D" << endl;
    } else if (x <= 40 and x >= 0) {
        cout << "E" << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }

    return 0;
}
