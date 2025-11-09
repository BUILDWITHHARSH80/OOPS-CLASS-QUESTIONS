// WAP to print unique dimensional array upto 5

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Element " << i + 1 << " is : " << arr[i] << endl;
    }

    return 0;
}