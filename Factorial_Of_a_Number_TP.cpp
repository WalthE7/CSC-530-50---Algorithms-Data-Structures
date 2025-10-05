#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);   // recursive call
}

int main() {
    int number;
    cout << "Enter a number to compute its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "The factorial of " << number << " is: " << result << endl;
    }
    
    return 0;
}
