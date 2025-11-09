// WAP to accept 10 numbers from user and display the addition.

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];o
        sum += arr[i];
    }

    cout << "Addition : " << sum << endl;

    return 0;
}