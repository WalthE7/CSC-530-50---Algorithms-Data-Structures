#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string &word) {
    stack<char> s;

    for (char ch : word) {
        s.push(ch);
    }

    for (char ch : word) {
        if (ch != s.top()) {
            return false; 
        }
        s.pop();
    }

    return true; 
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

