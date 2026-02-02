#include <iostream>
using namespace std;

int main() {
    string s, rev = "";

    cout << "Enter the ID: ";
    cin >> s;

    // reverse the string
    for (int i = s.length() - 1; i >= 0; i--) {
        rev = rev + s[i];
    }

    // check palindrome
    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
