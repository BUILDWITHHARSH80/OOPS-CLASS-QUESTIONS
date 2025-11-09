// WAP to check vowels using else if, ladder if, nested if, and switch

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Using else if (ladder if)
    if (ch == 'a' || ch == 'A') {
        cout << ch << " is a vowel (else if / ladder if)" << endl;
    } else if (ch == 'e' || ch == 'E') {
        cout << ch << " is a vowel (else if / ladder if)" << endl;
    } else if (ch == 'i' || ch == 'I') {
        cout << ch << " is a vowel (else if / ladder if)" << endl;
    } else if (ch == 'o' || ch == 'O') {
        cout << ch << " is a vowel (else if / ladder if)" << endl;
    } else if (ch == 'u' || ch == 'U') {
        cout << ch << " is a vowel (else if / ladder if)" << endl;
    } else {
        cout << ch << " is not a vowel (else if / ladder if)" << endl;
    }

    // Using nested if
    if (ch == 'a' || ch == 'A') {
        cout << ch << " is a vowel (nested if)" << endl;
    } else {
        if (ch == 'e' || ch == 'E') {
            cout << ch << " is a vowel (nested if)" << endl;
        } else {
            if (ch == 'i' || ch == 'I') {
                cout << ch << " is a vowel (nested if)" << endl;
            } else {
                if (ch == 'o' || ch == 'O') {
                    cout << ch << " is a vowel (nested if)" << endl;
                } else {
                    if (ch == 'u' || ch == 'U') {
                        cout << ch << " is a vowel (nested if)" << endl;
                    } else {
                        cout << ch << " is not a vowel (nested if)" << endl;
                    }
                }
            }
        }
    }

    // Using switch
    switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << ch << " is a vowel (switch)" << endl;
            break;
        default:
            cout << ch << " is not a vowel (switch)" << endl;
            break;
    }

    return 0;
}