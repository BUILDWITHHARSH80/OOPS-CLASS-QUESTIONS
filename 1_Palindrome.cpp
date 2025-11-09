// Write a program to check whether a given integer number is palindrome or not.

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char num[100], cpy[100];

    cout << "Enter Number: ";
    cin >> num;
    int n = strlen(num);

    strcpy(cpy, num);

    for (int i = 0; i < n / 2; i++) {
        int firstval = cpy[i];
        int revFirstval = cpy[n - i - 1];
        cpy[i] = revFirstval;
        cpy[n - i - 1] = firstval;
    }

    if (strcmp(cpy, num) == 0) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is NOT a Palindrome" << endl;
    }

    return 0;
}