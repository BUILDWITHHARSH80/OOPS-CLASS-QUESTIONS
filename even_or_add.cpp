// WAP to check if number is even or odd :

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using if-else
    if (num % 2 == 0) {
        cout << num << " is even (if-else)" << endl;
    } else {
        cout << num << " is odd (if-else)" << endl;
    }

    // Using ladder if
    if (num % 2 == 0)
        cout << num << " is even (ladder if)" << endl;
    else if (num % 2 != 0)
        cout << num << " is odd (ladder if)" << endl;

    // Using nested if
    if (num % 2 == 0) {
        cout << num << " is even (nested if)" << endl;
    } else {
        if (num % 2 != 0) {
            cout << num << " is odd (nested if)" << endl;
        }
    }

    return 0;
}
