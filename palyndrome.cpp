#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string &word) {
    stack<char> s;

    // Push all characters onto the stack
    for (char ch : word) {
        s.push(ch);
    }

    // Compare characters popped from stack with original word
    for (char ch : word) {
        if (ch != s.top()) {
            return false; // mismatch found
        }
        s.pop();
    }

    return true; // all characters matched
}

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}
