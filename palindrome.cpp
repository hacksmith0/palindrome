#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPalindrome(const string& input) {
    string cleaned;
    for (char ch : input) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    return cleaned == reversed;
}

int main() {
    string input;
    cout << "Enter any string (letters, digits, mix): ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a Palindrome ✅" << endl;
    } else {
        cout << "\"" << input << "\" is NOT a Palindrome ❌" << endl;
    }

    return 0;
}
