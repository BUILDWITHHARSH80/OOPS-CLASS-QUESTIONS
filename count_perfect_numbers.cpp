// WAP to accept 10 numbers from user and count all perfect numbers : Armstrong , Palindrome , Prime 

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool armstrong(int arr) {
    int len = 0, sum = 0;
    int temp = arr;

    while (temp != 0) {
        temp /= 10;
        len++;
    }

    temp = arr;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, len);
        temp /= 10;
    }
    if (sum == arr) {
        return true;
    }
    return false;
}

bool palindrome(int arr) {
    string str = to_string(arr);
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (rev == str) {
        return true;
    }

    return false;
}

bool prime(int arr) {
    if (arr <= 1)
        return false;
    for (int i = 2; i <= sqrt(arr); i++) {
        if (arr % i == 0)
            return false;
    }
    return true;
}

int main() {
    int arr[10];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int ca = 0, cp = 0, cpr = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (armstrong(arr[i]))
            ca++;
        if (palindrome(arr[i]))
            cp++;
        if (prime(arr[i]))
            cpr++;
    }

    cout << "Count of Armstrong numbers: " << ca << endl;
    cout << "Count of Palindrome numbers: " << cp << endl;
    cout << "Count of Prime numbers: " << cpr << endl;

    return 0;
}