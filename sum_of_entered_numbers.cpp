// WAP to enter 10 numbers and print its sum using while loop

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int n;
    int sum = 0;
    while (i <= 10) {
        cout << "Enter Number : ";
        cin >> n;
        sum += n;
        i++;
    }

    cout << "Sum : " << sum << endl;

    return 0;
}