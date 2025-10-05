#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Nothing to read.\n";
        return 0;
    }

    int *a = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    int mn = a[0];
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }

    cout << "Smallest: " << mn << "\n";
    cout << "Largest: " << mx << "\n";

    delete[] a;
    return 0;
}
