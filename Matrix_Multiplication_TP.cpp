#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols of A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of B: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Can't multiply: c1 must equal r2.\n";
        return 0;
    }

    // allocate 1D arrays and index manually
    int *A = new int[r1 * c1];
    int *B = new int[r2 * c2];
    int *C = new int[r1 * c2];

    cout << "Enter A (" << r1 << "x" << c1 << "):\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i * c1 + j];

    cout << "Enter B (" << r2 << "x" << c2 << "):\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i * c2 + j];

    // set C to 0
    for (int i = 0; i < r1 * c2; i++) C[i] = 0;

    // multiply: C = A * B
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += A[i * c1 + k] * B[k * c2 + j];
            }
            C[i * c2 + j] = sum;
        }
    }

    cout << "Result (A*B):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i * c2 + j] << " ";
        }
        cout << "\n";
    }

    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
