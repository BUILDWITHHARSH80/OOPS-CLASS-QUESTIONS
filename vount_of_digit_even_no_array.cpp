// WAP to accept 10 numbers from user and count 2 digit even number

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] % 2 == 0 && arr[i] >= 10 && arr[i] < 100) {
            count++;
        }
    }

    cout << "Number of Even 2 Digit Numbers : " << count << endl;

    return 0;
}